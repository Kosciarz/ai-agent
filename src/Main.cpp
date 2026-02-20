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
        RequestBuilder requestBuilder;
        requestBuilder.ReadPrompt(argc, argv, std::cin);
        requestBuilder.BuildRequest();
        std::println("Request: {}", requestBuilder.Request());
    }
    catch (const std::runtime_error& e)
    {
        std::println(stderr, "Error: {}", e.what());
        return 1;
    }
}
