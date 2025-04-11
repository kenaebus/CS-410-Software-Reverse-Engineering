#include <iostream>
#include <string>
#include <bitset>  
#include <sstream>  

using namespace std;

int main() {
    string binaryInput;
    
    cout << "Enter the binary number: ";
    std::cin >> binaryInput;

    // Convert binary string to integer
    unsigned int decimalValue = 0;
    decimalValue = bitset<32>(binaryInput).to_ulong();

    // Output integer equivalent
    cout << "Equivalent integer value: " << decimalValue << std::endl;

    return 0;
}
