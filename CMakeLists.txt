cmake_minimum_required(VERSION 3.27)

project(ansicodes)

message("Processing ansicodes subdirectory...")

add_library(ansicodes_lib ansicodes.cpp)

target_include_directories(ansicodes_lib PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include> $<INSTALL_INTERFACE:include/ansicodes>)

install(FILES include/ansicodes.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${CMAKE_PROJECT_NAME})

install(TARGETS ansicodes_lib EXPORT export_ansicodes DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/${CMAKE_PROJECT_NAME})
install(
    EXPORT export_ansicodes
    FILE ${CMAKE_PROJECT_NAME}-config.cmake
    NAMESPACE ${CMAKE_PROJECT_NAME}::
    DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/${CMAKE_PROJECT_NAME}
)
