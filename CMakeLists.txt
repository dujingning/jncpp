cmake_minimum_required(VERSION 3.1)

project(jncpp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${PROJECT_SOURCE_DIR}/include)

option(BUILD_EXAMPLES "Build example programs" OFF)

if(BUILD_EXAMPLES)
    message(STATUS "Building examples")

    file(GLOB_RECURSE EXAMPLE_FILES ${PROJECT_SOURCE_DIR}/examples/*.cpp)

    foreach(example_file ${EXAMPLE_FILES})
        get_filename_component(example_name ${example_file} NAME_WE)
	add_executable(${example_name} ${example_file})

	target_include_directories(${example_name} PRIVATE ${PROJECT_SOURCE_DIR}/include)
    endforeach()
else()
    message(STATUS "Not building examples")
endif()

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/ DESTINATION include)

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY
)

add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake
)

include(CPack)

