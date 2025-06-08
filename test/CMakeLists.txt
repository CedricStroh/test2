# Finde GoogleTest
find_package(GTest REQUIRED)
enable_testing()

# Testprogramm erstellen
add_executable(developer_test developer_test.cpp)

# Link mit Bibliothek und GoogleTest
target_link_libraries(developer_test PRIVATE developer_lib GTest::gtest_main)

# Testausführung aktivieren
include(GoogleTest)
gtest_discover_tests(developer_test)
