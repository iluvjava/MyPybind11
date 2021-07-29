cmake_minimum_required(VERSION 2.8.12)

project(cppbindings)

add_subdirectory(pybind11)
pybind11_add_module(PROJECT_NAME func_utils.cpp)
