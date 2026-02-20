#pragma once

#include "RequestBuilder.hpp"

#include "exception/ParsePromptError.hpp"

#include "utils/PlatformUtils.hpp"
#include "utils/StringUtils.hpp"

#include <sstream>

void RequestBuilder::ParsePrompt(const int argc, const char* argv[], std::istream& stream)
{
    if (argc < 2)
    {
        if (IsStdinInteractive())
            std::cout << "agent ";

        std::getline(stream, m_Prompt);
        if (!stream)
            throw ParsePromptError{"failed to read prompt input from stdin"};

        if (m_Prompt.empty())
            throw ParsePromptError{"empty prompt input. Usage: agent \"...\""};
    }
    else
    {
        std::ostringstream oss;
        for (auto i = 1; i < argc; ++i)
            oss << argv[i] << " ";
        m_Prompt = oss.str();
    }

    string_utils::Trim(m_Prompt);

    if (m_Prompt.empty())
        throw ParsePromptError{"invalid prompt input. Usage: agent \"...\""};
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
