#include "exception/ParsePromptError.hpp"

#include "utils/StringUtils.hpp"
#include "utils/PlatformUtils.hpp"

#include <iostream>
#include <print>
#include <sstream>
#include <string>
#include <stdexcept>

std::string ParsePrompt(const int argc, const char* argv[], std::istream& stream)
{
    std::string prompt;

    if (argc < 2)
    {
        if (IsStdinInteractive())
            std::cout << "agent ";

        std::getline(stream, prompt);
        if (!stream)
            throw ParsePromptError{"failed to read prompt input from stdin"};

        if (prompt.empty())
            throw ParsePromptError{"empty prompt input. Usage: agent \"...\""};
    }
    else
    {
        std::ostringstream oss;
        for (auto i = 1; i < argc; ++i)
            oss << argv[i] << " ";
        prompt = oss.str();
    }

    string_utils::Trim(prompt);

    if (prompt.empty())
        throw ParsePromptError{"invalid prompt input. Usage: agent \"...\""};

    return prompt;
}

int main(const int argc, const char* argv[])
{
    try
    {
        const std::string prompt = ParsePrompt(argc, argv, std::cin);
        std::println("Prompt: {}", prompt);
    }
    catch (const std::runtime_error& e)
    {
        std::println(stderr, "Error: {}", e.what());
        return 1;
    }
}
