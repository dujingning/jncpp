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

#ifndef __JNCPP_CALL_ONCE__
#define __JNCPP_CALL_ONCE__

#include <mutex>

#ifndef CONCATENATE_DETAIL
#define CONCATENATE_DETAIL(x, y) x##y
#endif

#ifndef CONCATENATE
#define CONCATENATE(x, y) CONCATENATE_DETAIL(x, y)
#endif

#define Call_Once(code)                                                     \
    do {                                                                    \
        static std::once_flag CONCATENATE(__call_once__, __LINE__);             \
        std::call_once(CONCATENATE(__call_once__, __LINE__), [&]() { code });   \
    } while(0)


#endif // __JNCPP_DEFER__
