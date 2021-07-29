#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <iostream>
#include <math.h>

// We only focus on functions here, not other stuff yet. 

namespace py = pybind11;

/**
 * Testing on primitive types and c++ vector type, with default parameters defined via python interface part. 
 */
double MaxRecursive(std::vector<double>& arr, int start, int end)
{

    // edge cases 
    if (arr.size() == 0) return -INFINITY;
    if (end == -1) end = arr.size(); 
    // base cases
    if (end - start == 2)
    {
        return std::max(arr[start], arr[end - 1]);
    }
    if (end - start == 1)
    {
        return arr[start];
    }
    if (start == end) return -INFINITY;

    int m = (start + end)/2;
    double LeftMax = MaxRecursive(arr, start, m); 
    double RightMax = MaxRecursive(arr, m, end);
    double TheMax = std::max(LeftMax, RightMax);
    return TheMax;
}

// Function with type overloading with python and primitive types. 

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
//
// To handle function overloading, we need to define it in the interface here. 
// Default parameters will have to be defined here as well. 
PYBIND11_MODULE(cppbindings, m)
{
    m.doc() = "binded cpp functions"; 
    m.def("add", py::overload_cast<py::int_, py::int_>(&add));
    m.def("add", py::overload_cast<int, int>(&add));
    m.def("add", py::overload_cast<double, double>(&add));
    m.def("MaxRecursive",
          &MaxRecursive, 
          py::arg("arr"),
          py::arg("start")=0, 
          py::arg("end")=-1);
}