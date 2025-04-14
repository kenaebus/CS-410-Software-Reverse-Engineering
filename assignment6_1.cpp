#include <iostream>

using namespace std;

void DisplayMenu() 
{
    cout << "----------------" << endl;
    cout << " - 1) Add - " << endl;
    cout << " - 2) Subtract - " << endl;
    cout << " - 3) Multiply - " << endl;
    cout << " - 4) Exit - " << endl;
    cout << "----------------" << endl;
}
int main() 
{
    int a, b, c;        // Should initialize values


    int a = 0;
    int b = 0;
    int c = 0; 

    DisplayMenu();

    cin >> a;           ///////
    cin >> b;           // Entire input section causes unpredictable errors when collecting input
    cin >> c;           //////   

    if (a == 4) {
        cout << "Exiting program." << endl;
        return 0;
    }

    switch(a) {
        case 1:
            cout << b <<" + " << c << " = " << b + c << endl;
            break;
        case 2:
            cout << b <<" - " << c << " = " << b - c << endl;
            break;
        case 3:
            cout << b <<" * " << c << " = " << b * c << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
    }
    return 0;
}
