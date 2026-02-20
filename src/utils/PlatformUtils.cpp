#include "utils/PlatformUtils.hpp"

#ifdef _WIN32
#include <io.h>
#include <cstdio>
#else
#include <unistd.h>
#endif

namespace utils
{
    bool IsTerminalInteractive()
    {
#ifdef _WIN32
        return _isatty(_fileno(stdin));
#else
        return isatty(fileno(stdin));
#endif
    }
}
