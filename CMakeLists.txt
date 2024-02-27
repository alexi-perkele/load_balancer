cmake_minimum_required(VERSION 3.14)
project(load_balancer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread")

find_package(Boost COMPONENTS program_options REQUIRED)



set(BALANCER_SOURCES ${CMAKE_SOURCE_DIR}/src/balancer.cpp
                     ${CMAKE_SOURCE_DIR}/src/main.cpp
                     ${CMAKE_SOURCE_DIR}/src/balancer_socket.cpp    )

set(SETTINGS_SOURCES src/settings.cpp)

add_executable(balancer ${BALANCER_SOURCES} ${OPTIONS_SOURCES})

target_include_directories(balancer PRIVATE
   #     src
        ${CMAKE_SOURCE_DIR}/include
        )