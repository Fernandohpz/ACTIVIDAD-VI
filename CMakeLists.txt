cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(test)

set(CMAKE_C_STANDARD 11)
pico_sdk_init()

add_executable(test
	test.c ../ssd1306.c
)

target_include_directories(test
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/../
)

target_link_libraries(test pico_stdlib hardware_i2c)

pico_enable_stdio_usb(test 1) 
pico_enable_stdio_uart(test 0) 
pico_add_extra_outputs(test)