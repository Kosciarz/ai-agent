#include <gtest/gtest.h>

#include "exception/ParsePromptError.hpp"
#include "utils/PromptUtils.hpp"

#include <sstream>
#include <string>
#include <array>

TEST(PromptUtilsTest, ParsePrompt_ValidInput_TrimmedCorrectly)
{
    EXPECT_EQ(utils::ParsePrompt("valid input"), "valid input");
    EXPECT_EQ(utils::ParsePrompt("  valid input   "), "valid input");
    EXPECT_EQ(utils::ParsePrompt("  valid input"), "valid input");
    EXPECT_EQ(utils::ParsePrompt("valid input   "), "valid input");
    EXPECT_EQ(utils::ParsePrompt("\tvalid input\t"), "valid input");
    EXPECT_EQ(utils::ParsePrompt("\nvalid input\n"), "valid input");
    EXPECT_EQ(utils::ParsePrompt(" valid\ninput "), "valid\ninput");
}

TEST(PromptUtilsTest, ParsePrompt_TrimsCorrectlyVeryLongInput)
{
    EXPECT_EQ(utils::ParsePrompt(std::string(10000, 'x')), std::string(10000, 'x'));
}

TEST(PromptUtilsTest, ParsePrompt_EmptyInput_Throws) { EXPECT_THROW(utils::ParsePrompt(""), ParsePromptError); }

TEST(PromptUtilsTest, ParsePrompt_WhitespaceOnly_Throws)
{
    EXPECT_THROW(utils::ParsePrompt(" \t\n "), ParsePromptError);
}

TEST(PromptUtilsTest, ResolveInput_NoProgramArguments_ReadsFromStream)
{
    std::stringstream ss;
    ss << "this is a prompt\n";

    const auto result = utils::ResolveInput(1, nullptr, ss, false);

    EXPECT_EQ(result, "this is a prompt");
}

TEST(PromptUtilsTest, ResolveInput_NoProgramArgumentsEmptyStream_Throws)
{
    std::istringstream iss;

    EXPECT_THROW(utils::ResolveInput(1, nullptr, iss, false), std::runtime_error);
}

TEST(PromptUtilsTest, ResolveInput_ProgramArguments_ReadsFromArguments)
{
    std::array<const char*, 7> argumentInput{"program", "this", "is", "a", "prompt", "from", "arguments"};
    std::stringstream ss;
    ss << "this is a prompt from a stream\n";

    const auto result = utils::ResolveInput(argumentInput.size(), argumentInput.data(), ss, false);

    EXPECT_EQ(result, "this is a prompt from arguments");
    EXPECT_NE(result, "this is a prompt from a stream");
}

TEST(PromptUtilsTest, ResolveInput_FailedStreamState_Throws)
{
    std::istringstream iss;
    iss.setstate(std::ios::failbit);

    EXPECT_THROW(utils::ResolveInput(1, nullptr, iss, false), std::runtime_error);

    iss.clear();
    iss.setstate(std::ios::badbit);

    EXPECT_THROW(utils::ResolveInput(1, nullptr, iss, false), std::runtime_error);
}

TEST(PromptUtilsTest, ResolveInput_PreservesWhitespace)
{
    std::array<const char*, 3> argumentInput{"program", "   valid   ", "  input \t"};
    std::istringstream iss;

    const auto result = utils::ResolveInput(argumentInput.size(), argumentInput.data(), iss, false);

    EXPECT_EQ(result, "   valid      input \t");
}
