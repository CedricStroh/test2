# Erzeuge Hauptanwendung
add_executable(developer_app main.cpp)

# Linke mit Bibliothek
target_link_libraries(developer_app PRIVATE developer_lib)
