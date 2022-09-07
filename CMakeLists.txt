cmake_minimum_required(VERSION 3.23)
project(producer_consumer)

set(CMAKE_CXX_STANDARD 17)

add_executable(producer_consumer main.cpp product_pool.cpp product_pool.h)
