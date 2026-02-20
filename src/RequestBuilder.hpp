#pragma once

#include <iostream>
#include <string>

enum class Tools
{
    RunCommand, ReadFile, ListDirectory
};

class RequestBuilder
{
public:
    void ParsePrompt(int argc, const char* argv[], std::istream& stream);
    void BuildRequest();

    [[nodiscard]] const std::string& Prompt() const { return m_Prompt; }
    [[nodiscard]] const std::string& Request() const { return m_Request; }

private:
    std::string m_Prompt;
    std::string m_Request;
};
