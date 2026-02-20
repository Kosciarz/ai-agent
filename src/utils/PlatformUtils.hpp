#pragma once

#ifdef _WIN32
#include <io.h>
#include <cstdio>
#else
#include <unistd.h>
#endif

inline bool IsStdinInteractive()
{
#ifdef _WIN32
    return _isatty(_fileno(stdin));
#else
    return isatty(fileno(stdin));
#endif
}
