# Header und Quellcode zusammenfassen
file(GLOB LIB_HEADERS "${CMAKE_SOURCE_DIR}/include/*.hpp")
file(GLOB LIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Bibliothek erstellen
add_library(developer_lib ${LIB_HEADERS} ${LIB_SOURCES})

# Header-Ordner global sichtbar machen
target_include_directories(developer_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
