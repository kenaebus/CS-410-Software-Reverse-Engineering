#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    
    int input;
    std::cin >> input;

    int result = input * input * input; // Cube the number
    double final_result = result * 1.5; // Multiply by 1.5

    std::cout << "Result: " << final_result << std::endl;
    
    return 0;
}



