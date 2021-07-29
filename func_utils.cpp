#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <iostream>


namespace py = pybind11;

/**
 * 
 */
double MaxRecursive(std::vector<double>& arr, int start=0, int end=-1)
{
    return 0.0;
}

py::int_ add(py::int_ a, py::int_b)
{
    return a + b;
}


// -----------------------------------------------------------------------------
// Python Interfacing code
// -----------------------------------------------------------------------------

PYBIND11_MODULE(cppbings, m)
{
    m.doc() = "binded cpp functions"; 
    m.def("add", &add);
}