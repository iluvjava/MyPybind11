### MyPybind11
This is me trying out some pybind stuff. 

### Tool Lists: 
* Linux Machine
	* cmake, clang, gcc
	* eigen3 (Preferable for math)
	* Python3
	* make (Optinal)
* IDE: 
	* VS-Code with: 
		* c/c++ from microsoft
		* python from microsoft
		* cmake and cmake tools
	* Pybind11 Repos that get referred to in the project. 

### Tutorials:
* Pybind11 Official Tutorials
* Cmake Tutorials

### CMake
* the output of the cmake is the SHARED library files for python. 

Header: 
```cpp
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>


```

Python Interface: 
	* Consult pybind11 tutorial. 


### Functions: Resources Management: 

Does the lifetime for whatever is returned by the CPP functions mange by python? or CPP? This is the concern whenever a function in CPP decided to return a reference/pointer to something. It will cause double free problem. 

See [here](https://pybind11.readthedocs.io/en/stable/advanced/functions.html#return-value-policies) for more. They are bind to the `module::def` and `class:def`functions, as an input parameter. 

All in all, don't return a pointer to a resource that is hold by something else, or potentially something else. 

### Functions: Parameters (arg*, Kargs*, default param, positional params, keyboard params)


### Functions: Types


