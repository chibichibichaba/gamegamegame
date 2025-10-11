# Engine/CMakeLists.txt
file(GLOB_RECURSE ENGINE_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.h"
)

add_library(Engine STATIC ${ENGINE_SOURCES})

target_include_directories(Engine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
