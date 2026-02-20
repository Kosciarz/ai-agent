include(CTest)
enable_testing()

set(REQUEST_TEST_SOURCES
    "RequestBuilderTest.cpp"
    "PromptUtilsTest.cpp"
)

add_executable(RequestTest ${REQUEST_TEST_SOURCES})
target_link_libraries(RequestTest
    PRIVATE agent-lib GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(RequestTest)
