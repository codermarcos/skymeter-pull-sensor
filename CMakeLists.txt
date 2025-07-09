cmake_minimum_required(VERSION 3.13)

include(../pico-sdk/external/pico_sdk_import.cmake)

project(pullsensor C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2")

pico_sdk_init()

add_executable(pullsensor
    main.c
)

target_link_libraries(pullsensor 
    pico_stdlib
    hardware_pwm
)

pico_add_extra_outputs(pullsensor)
