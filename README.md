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
The Go programming language has a `defer` keyword that allows you to execute code at the end of a function. Similarly, C++ could benefit from such a feature, especially when working with C code.
##### defer usage:
```cpp
defer
(
    std::cout << "defer code 0.0" << std::endl;
);
```
## [1.Call_Once](https://github.com/dujingning/jncpp/blob/main/examples/call_once.cpp)
let `std::call_once` more clean,as code:
```cpp
Call_Once (
    std::cout << "Call_Once" << std::endl;
);
```
---
## 3. wait more ...


# Ⅴ、End
This project was created by DuJingning.