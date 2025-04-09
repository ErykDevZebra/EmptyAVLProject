cmake_minimum_required(VERSION 3.10)

project(EmptyAVLProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the source directory

# Define the executable name
set(EXECUTABLE_FILE Executable)

set(SRC_DIR "./sources")
set(HEAD_DIR "./headers")


set(SRC_FILES
    ${SRC_DIR}/main.cpp
    #${SRC_DIR}/other.cpp
)

set(HEADER_FILES
    ${HEAD_DIR}/main.h
    #${HEAD_DIR}/other.h
)

find_package(
    AVL
    # for a specific version, uncomment the line below
    #5.4
    CONFIG
    REQUIRED
)

# copy binaries to build directory (unnecessary on Ubuntu)
IF (WIN32)
    copy_avl()
ENDIF()

# Add an executable with all the source files
add_executable(${EXECUTABLE_FILE} ${SRC_FILES} ${HEADER_FILES})

# Optionally, include directories (e.g., for headers)
target_include_directories(${EXECUTABLE_FILE} PRIVATE ${SRC_DIR})


# install user executable
install(TARGETS ${EXECUTABLE_FILE})

# install ALL AVL libraries
#install_avl()

# Add additional libraries, if needed
target_link_libraries(${EXECUTABLE_FILE} PRIVATE AVL)

# Add a custom target for cleaning up
add_custom_target(clear
    COMMENT "${CMAKE_BINARY_DIR}"
    COMMAND ${CMAKE_COMMAND} -E remove_directory "${CMAKE_BINARY_DIR}/CMakeFiles"
    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/CMakeCache.txt"
    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/cmake_install.cmake"
    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/compile_commands.json"
    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/.cmake"
    
    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/Makefile"
    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/${EXECUTABLE_FILE}"

    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/*.so"
    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_BINARY_DIR}/*.dll"

    COMMENT "Removing CMake-generated files and the executable"
)


