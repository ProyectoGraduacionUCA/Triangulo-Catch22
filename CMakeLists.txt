cmake_minimum_required(VERSION 3.10)
project(TrianguloTests)

set(CMAKE_CXX_STANDARD 17)

# Agregar Catch2
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.4.0
)
FetchContent_MakeAvailable(Catch2)

add_executable(tests tests/test_triangulo.cpp src/triangulo.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
