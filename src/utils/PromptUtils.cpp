#include "PromptUtils.hpp"

#include "utils/StringUtils.hpp"

#include "exception/ParsePromptError.hpp"

#include <string>
#include <iostream>
#include <sstream>

namespace utils
{
    std::string ResolveInput(const int argc, const char* argv[], std::istream& stream, const bool isTerminalInteractive)
    {
        if (argc > 1)
        {
            std::ostringstream oss;
            for (int i = 1; i < argc; ++i)
            {
                oss << argv[i];
                if (i + 1 < argc)
                    oss << " ";
            }
            return oss.str();
        }

        if (isTerminalInteractive)
            std::cout << "agent ";

        std::string line;
        if (!std::getline(stream, line))
            throw std::runtime_error{"failed to read prompt input from stdin"};

        return line;
    }

    std::string ParsePrompt(const std::string& prompt)
    {
        const auto trimmed = Trim(prompt);
        if (trimmed.empty())
            throw ParsePromptError{"invalid prompt input. Usage: agent \"...\""};
        return trimmed;
    }
}
