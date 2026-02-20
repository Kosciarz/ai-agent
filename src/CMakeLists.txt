set(SOURCES
    "Main.cpp"
)

set(HEADERS
    "utils/StringUtils.hpp"
    "exception/ParsePromptError.hpp"
    "utils/StringUtils.hpp"
    "utils/PlatformUtils.hpp"
)

add_executable(agent ${SOURCES} ${HEADERS})
