#include "StringUtils.hpp"

#include <iostream>
#include <print>
#include <string>

std::string ParsePrompt(const int argc, const char* argv[], std::istream& stream)
{
    std::string prompt;

    if (argc < 2)
    {
        std::cout << "agent ";
        std::getline(stream, prompt);
    }
    else
    {
        for (std::size_t i = 1; i < argc; ++i)
        {
            prompt += argv[i];
            prompt += " ";
        }
    }

    Trim(prompt);

    if (prompt == "")
        throw std::runtime_error{"empty prompt input"};

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
