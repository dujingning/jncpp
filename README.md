# - Table of Contents
- [Ⅰ、jncpp project](#ⅰjncpp-project)
- [Ⅱ、Description](#ⅱdescription)
- [Ⅲ、Compile](#ⅲcompile)
- [Ⅳ、Features and Usage](#ⅳfeatures-and-usage)
- [Ⅴ、End](#ⅴend)

# Ⅰ、jncpp project
A C++ library for everyone to use.

# Ⅱ、Description
Header file only for C++ library, simplifying C++ development further.Supports C++11 and later.

# Ⅲ、Compile
Ensure CMake is installed
```bash
mkdir build; cd build
cmake -DBUILD_EXAMPLES=ON ..
make && make install
```
Specify installation path
```bash
cmake -DCMAKE_INSTALL_PREFIX=$PWD/libs/jncpp ..
```

# Ⅳ、Features and Usage

## [1.defer](https://github.com/dujingning/jncpp/blob/main/examples/defer.cpp)
The Go programming language has a `defer` keyword that allows you to execute code at the end of a function. Similarly, C++ could benefit from such a feature, especially when working with C code. See more  [defer example](https://github.com/dujingning/jncpp/blob/main/examples/defer.cpp).

- **Global defer**: Runs after the main function.
```cpp
global_defer
{
    std::cout << "defer code 1.0" << std::endl;
}; // semicolon required
```

- **Local defer**: Run before the end of scope.
```cpp
void function() {
    defer // Run before the end of scope.
    {
        std::cout << "defer code 1.0" << std::endl;
    };  // semicolon required

    {
        defer // Run before the end of scope.
        {
            std::cout << "defer code 0.0" << std::endl;
        };  
    }
}
```
## [2.Call_Once](https://github.com/dujingning/jncpp/blob/main/examples/call_once.cpp)
let `std::call_once` more clean, as code:
```cpp
void function() {
    Call_Once (
        std::cout << "Call_Once" << std::endl;
    };  // semicolon required
);
```
---
## [3. wait more ...](https://github.com/dujingning/jncpp)


# Ⅴ、End
This project was created by DuJingning.