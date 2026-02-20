#pragma once

#include <string>
#include <istream>

namespace utils
{
    std::string ResolveInput(int argc, const char* argv[], std::istream& stream, bool isTerminalInteractive);
    std::string ParsePrompt(const std::string& prompt);
}
