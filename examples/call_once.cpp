#include <jncpp/call_once.hpp>

#include <iostream>


// Function that demonstrates the 'Call_Once' functionality
void call() {
    // 'Call_Once' ensures this block runs only once, even if called multiple times
    Call_Once (
        std::cout << "Call_Once: This message will appear only once." << std::endl;
    );
}


int main() {
    // Calling the 'call' function multiple times, but 'Call_Once' ensures only one output
    call();  // First call, 'Call_Once' will execute
    call();  // Subsequent calls will not trigger the 'Call_Once' block
    call();

    return 0;
}
