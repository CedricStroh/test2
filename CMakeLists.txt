cmake_minimum_required(VERSION 3.20)
project(developer_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiler-Warnungen
add_compile_options(-Wall -Wextra -pedantic)

# Pfad zur Logo-Datei definieren
add_definitions(-DLOGO_PATH="${CMAKE_SOURCE_DIR}/logos")

# Unterordner einbinden
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)

