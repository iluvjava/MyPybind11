#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <iostream>

// We only focus on functions here, not other stuff yet. 

namespace py = pybind11;

/**
 * Testing on primitive types and c++ vector type. 
 */
double MaxRecursive(std::vector<double>& arr, int start=0, int end=-1)
{
    return 0.0;
}

// Type overloading with python and primitive

py::int_ add(py::int_ a, py::int_ b)
{
    return a + b;
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}


// -----------------------------------------------------------------------------
// Python Interfacing code
// -----------------------------------------------------------------------------

// the macro input here has to match the name for the python import. 
// in python: `import cppbindings`, regardless what the name is for the file I think. 
PYBIND11_MODULE(cppbindings, m)
{
    m.doc() = "binded cpp functions"; 
    m.def("add", py::overload_cast<py::int_, py::int_>(&add));
    m.def("add", py::overload_cast<int, int>(&add));
    m.def("add", py::overload_cast<double, double>(&add));
}