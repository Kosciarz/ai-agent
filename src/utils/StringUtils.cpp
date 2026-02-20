#include "StringUtils.hpp"

#include <string>
#include <algorithm>
#include <cctype>

namespace utils
{
    std::string LeftTrim(const std::string& s)
    {
        auto trimmed = s;
        trimmed.erase(trimmed.begin(), std::ranges::find_if(trimmed, [](const unsigned char ch)
        {
            return !std::isspace(ch);
        }));
        return trimmed;
    }

    std::string RightTrim(const std::string& s)
    {
        auto trimmed = s;
        trimmed.erase(std::find_if(trimmed.rbegin(), trimmed.rend(), [](const unsigned char ch)
        {
            return !std::isspace(ch);
        }).base(), trimmed.end());
        return trimmed;
    }

    std::string Trim(const std::string& s)
    {
        auto trimmed = s;
        trimmed = LeftTrim(trimmed);
        trimmed = RightTrim(trimmed);
        return trimmed;
    }
}
