# Ⅰ、jncpp project
A C++ library for everyone to use.

# Ⅱ、Description
Header file only for C++ library, simplifying C++ development further.Supports C++11 and later.

# Ⅲ、Compile
Ensure CMake is installed
```bash
mkdir build
cd build
cmake -DBUILD_EXAMPLES=ON ..
make && make install
```
Specify installation path
```bash
cmake -DCMAKE_INSTALL_PREFIX=$PWD/libs/jncpp ..
```

# Ⅳ、Features and Usage

## 1.defer
The Go programming language has a `defer` keyword that allows you to execute code at the end of a function. Similarly, C++ could benefit from such a feature, especially when working with C code.
##### defer usage:
```cpp
defer
{
    std::cout << "defer code 0.0" << std::endl;
};
```

---
## 2. wait more ...


# Ⅴ、End
This project was created by DuJingning.