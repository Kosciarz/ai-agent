#pragma once

#include <stdexcept>

class ParsePromptError : public std::runtime_error
{
public:
    explicit ParsePromptError(const std::string& _Message)
        : runtime_error(_Message)
    {
    }

    explicit ParsePromptError(const char* _Message)
        : runtime_error(_Message)
    {
    }
};
