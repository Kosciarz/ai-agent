#include "RequestBuilder.hpp"

#include "utils/StringUtils.hpp"

#include <iostream>
#include <print>
#include <string>
#include <stdexcept>

int main(const int argc, const char* argv[])
{
    try
    {
        const auto prompt = RequestBuilder::ReadPrompt(argc, argv, std::cin);
        const auto parsedPrompt = RequestBuilder::ParsePrompt(prompt);
        RequestBuilder::BuildRequest(prompt);
        std::println("Request: {}", request);
    }
    catch (const std::runtime_error& e)
    {
        std::println(stderr, "Error: {}", e.what());
        return 1;
    }
}
