#pragma once

#include "RequestBuilder.hpp"

#include "exception/ParsePromptError.hpp"

#include "utils/PlatformUtils.hpp"
#include "utils/StringUtils.hpp"

#include <sstream>

void RequestBuilder::ReadPrompt(const int argc, const char* argv[], std::istream& stream)
{
    const auto rawInput = ResolveInput(argc, argv, stream, utils::IsStdinInteractive());
    m_Prompt = ParsePrompt(rawInput);
}

std::string RequestBuilder::ResolveInput(const int argc, const char* argv[], std::istream& stream, const bool isTerminalInteractive)
{
    if (argc > 1)
    {
        std::ostringstream oss;
        for (int i = 1; i < argc; ++i)
            oss << argv[i] << " ";
        return oss.str();
    }

    if (isTerminalInteractive)
        std::cout << "agent ";

    std::string line;
    if (!std::getline(stream, line))
        throw std::runtime_error{"failed to read prompt input from stdin"};

    return line;
}

std::string RequestBuilder::ParsePrompt(const std::string& prompt)
{
    if (utils::Trim(prompt).empty())
        throw ParsePromptError{"invalid prompt input. Usage: agent \"...\""};
    return prompt;
}


void RequestBuilder::BuildRequest()
{
    std::ostringstream oss;
    oss << "You are an AI assistant. The user asked: " << m_Prompt << '\n';
    oss << "Available tools you may call exactly once:" << '\n';
    oss << "- run_command" << '\n';
    oss << "- read_file" << '\n';
    oss << "- list_directory" << '\n';
    oss << "Provide a JSON response indicating:" << '\n';
    oss << "1) Which tool to call (tool)" << '\n';
    oss << "2) The arguments (args)" << '\n';
    oss << "3) A brief explanation (explanation)" << '\n';
    m_Request = oss.str();
}
