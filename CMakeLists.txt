cmake_minimum_required(VERSION 2.8.12)
project(cppbindings)

add_subdirectory(pybind11)
pybind11_add_module(cppbings func_utils.cpp)
