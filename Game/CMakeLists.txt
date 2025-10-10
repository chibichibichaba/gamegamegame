# Main game executable
add_executable(Game ${CMAKE_CURRENT_SOURCE_DIR}/ArenaMen/main.cpp)

# Include SFML headers
include_directories("C:/SFML-Build/install/include")

# Find and link SFML
find_package(SFML 2.6 COMPONENTS system window graphics REQUIRED)

# Link Engine static lib + SFML
target_link_libraries(Game PRIVATE Engine sfml-system sfml-window sfml-graphics)
