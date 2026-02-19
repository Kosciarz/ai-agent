#include "StringUtils.hpp"

#include <iostream>
#include <print>
#include <string>
#include <stdexcept>

#ifdef _WIN32
#include <io.h>
#include <cstdio>
#else
#include <unistd.h>
#endif

bool IsStdinInteractive()
{
#ifdef _WIN32
    return _isatty(_fileno(stdin));
#else
    return isatty(fileno(stdin));
#endif
}

std::string ParsePrompt(const int argc, const char* argv[], std::istream& stream)
{
    std::string prompt;

    if (argc < 2)
    {
        if (IsStdinInteractive())
            std::cout << "agent ";

        std::getline(stream, prompt);

        if (prompt == "")
            throw std::runtime_error{"empty prompt input. Usage: agent \"...\""};
    }
    else
    {
        for (std::size_t i = 1; i < argc; ++i)
        {
            prompt += argv[i];
            prompt += " ";
        }
    }

    string_utils::Trim(prompt);

    if (prompt == "")
        throw std::runtime_error{"invalid prompt input. Usage: agent \"...\""};

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
