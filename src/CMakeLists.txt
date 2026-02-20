set(SOURCES
    "RequestBuilder.cpp"

    "utils/PromptUtils.cpp"
    "utils/StringUtils.cpp"
    "utils/PlatformUtils.cpp"
)

set(HEADERS
    "RequestBuilder.hpp"

    "utils/StringUtils.hpp"
    "utils/PlatformUtils.hpp"
    "utils/PromptUtils.hpp"

    "exception/ParsePromptError.hpp"
)

add_library(agent-lib ${SOURCES} ${HEADERS})
target_include_directories(agent-lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(agent-lib
    PRIVATE nlohmann_json::nlohmann_json
)

add_executable(agent "Main.cpp")
target_link_libraries(agent
    PRIVATE agent-lib
)
