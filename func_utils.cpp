#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <iostream>

// We only focus on functions here, not other stuff yet. 

namespace py = pybind11;

/**
 * 
 */
double MaxRecursive(std::vector<double>& arr, int start=0, int end=-1)
{
    return 0.0;
}

py::int_ add(py::int_ a, py::int_ b)
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