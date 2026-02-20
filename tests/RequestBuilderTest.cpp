#include <gtest/gtest.h>

#include "RequestBuilder.hpp"

#include <sstream>

class RequestBuilderTest : public testing::Test
{
protected:
    RequestBuilderTest()
    {
        std::stringstream ss;
        ss << "input prompt\n";
        m_RequestBuilder.ReadPrompt(1, nullptr, ss);
    }

protected:
    RequestBuilder m_RequestBuilder;
};

TEST_F(RequestBuilderTest, ReadPrompt_ValidInput_ReadsAndStoresPrompt)
{
    EXPECT_EQ(m_RequestBuilder.Prompt(), "input prompt");
}

TEST_F(RequestBuilderTest, BuildRequest_BuildProperRequest)
{
    m_RequestBuilder.BuildRequest();

    EXPECT_EQ(m_RequestBuilder.Request(),
              "You are an AI assistant. The user asked: " "input prompt" "\n"
              "Available tools you may call exactly once:"  "\n"
              "- run_command" "\n"
              "- read_file" "\n"
              "- list_directory" "\n"
              "Provide a JSON response indicating:" "\n"
              "1) Which tool to call (tool)" "\n"
              "2) The arguments (args)" "\n"
              "3) A brief explanation (explanation)" "\n");
}
