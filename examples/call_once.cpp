#include <jncpp/call_once.hpp>

#include <iostream>

void call() {
    Call_Once (
        std::cout << "Call_Once" << std::endl;
    );
}

int main() {
    call();
    call();
    call();
    call();
    return 0;
}
