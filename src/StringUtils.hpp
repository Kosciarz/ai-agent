#pragma once

#include <string>
#include <algorithm>
#include <cctype>

inline void LeftTrim(std::string& s)
{
    s.erase(s.begin(), std::ranges::find_if(s, [](const unsigned char ch)
    {
        return !std::isspace(ch);
    }));
}

inline void RightTrim(std::string&s)
{
    s.erase(std::find_if(s.rbegin(), s.rend(), [](const unsigned char ch)
    {
        return !std::isspace(ch);
    }).base(), s.end());
}

inline void Trim(std::string& s)
{
    LeftTrim(s);
    RightTrim(s);
}
