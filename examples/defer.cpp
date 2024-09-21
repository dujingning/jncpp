/*
* MIT License
*
* Copyright (c) 2024 dujingning <djn2019x@163.com> <https://github.com/dujingning/inicpp.git>
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#include <jncpp/defer.hpp>

#include <iostream>

// executed after main
global_defer
(
    std::cout << "Global defer: code 0.0" << std::endl;
);

// executed after main
_global_defer_
{
    std::cout << "Global defer: code 1.0" << std::endl;
}; // semicolon required


int main() {
    std::cout << "App main start..." << std::endl;

    // Local defer
    defer
    (
        std::cout << "Local defer: code 0.0" << std::endl;
    );

    // Local defer
    _defer_
    {
        std::cout << "Local defer: code 1.0" << std::endl;
    }; // semicolon required

    std::cout << "App main end..." << std::endl;

    return 0;
}

