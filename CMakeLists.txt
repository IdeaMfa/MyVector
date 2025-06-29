cmake_minimum_required(VERSION 3.10)
project(MyVector VERSION 1.0.0 LANGUAGES CXX)

# Declare this as a header-only interface library
add_library(MyVector INTERFACE)

# Tell consumers where to find headers (for both build and install)
target_include_directories(MyVector INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Allow others to install this library
install(TARGETS MyVector EXPORT MyVectorTargets)
install(EXPORT MyVectorTargets
    FILE MyVectorTargets.cmake
    NAMESPACE MyVector::
    DESTINATION lib/cmake/MyVector
)
install(DIRECTORY include/ DESTINATION include)
