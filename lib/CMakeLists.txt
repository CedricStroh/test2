add_library(developer_lib
    Developer.cpp
    JuniorDeveloper.cpp
    SeniorDeveloper.cpp
)

target_include_directories(developer_lib PUBLIC include)
