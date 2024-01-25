
#include <iostream>

// Function that adds two numbers
void add(int a, int b) {
    int result = a + b;
    //return result;  // The result is returned to the caller
}

int main() {
    int sum = add(3, 4);  // Call the add function and store the result in 'sum'
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
