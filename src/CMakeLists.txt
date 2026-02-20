set(SOURCES
    "Main.cpp"
    "RequestBuilder.cpp"
)

set(HEADERS
    "RequestBuilder.hpp"

    "utils/StringUtils.hpp"
    "utils/PlatformUtils.hpp"

    "exception/ParsePromptError.hpp"
)

add_executable(agent ${SOURCES} ${HEADERS})
target_link_libraries(agent
    PRIVATE nlohmann_json::nlohmann_json
)
