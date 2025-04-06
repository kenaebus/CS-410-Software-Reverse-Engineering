#include <iostream>

using namespace std;

void DisplayInfo(int num1, int num2, int num3, int num4, int num5){
    cout << "Client's Name      Service Selected (1 = Brokerage, 2 = Retirement" << endl;
    cout << "1. Bob Jones selected option " << num1 << endl;
    cout << "2. Sarah Davis selected option " << num2 << endl;
    cout << "3. Amy Friendly selected option " << num3 << endl;
    cout << "4. Johnny Smith selected option " << num4 << endl;
    cout << "5. Carol Spears selected option " << num5 << endl;

    return;
}


int CheckUserPermissionAccess() {
    string userName = "";
    string passWord = "";

    // Prompt for username
    while (true) {
        cout << "Enter your username: ";
        cin >> userName; // Get user input
        if (userName != "") { // Check if username is not empty
            break;
        }
        cout << "Username cannot be empty. Please try again." << endl;
    }

    // Prompt for password
    while (true) {
        cout << "Enter your password: ";
        cin >> passWord; // Get user input
        if (passWord.empty()) { // Check if password is not empty
            cout << "Password cannot be empty. Please try again." << endl;
            continue;
        }
        

        if (passWord == "123") {
            return 1;
        }
        else {
            cout << "Invalid password. Please try again" << endl;

        }
    }

}

void ChangeCustomerChoice(int& num1, int& num2, int& num3, int& num4, int& num5) {
    int initialChoice = NULL;
    int newChoice = NULL;

    cout << "Enter the number of the client you wish to change: " << endl;
    cin >> initialChoice; // Get user input
    if (initialChoice == NULL) {
        return;
    }

    cout << "Enter the client's new service choice (1 = Brokerage, 2 = Retirement): " << endl;
    cin >> newChoice; 
    if (newChoice == NULL) {
        return;
    }
    else if (initialChoice == 1) {
        num1 = newChoice;
    }
    else if (initialChoice == 2) {
        num2 = newChoice;
    }
    else if (initialChoice == 3) {
        num3 = newChoice;
    }
    else if (initialChoice == 4) {
        num4 = newChoice;    
    }
    else if (initialChoice == 5) {
        num5 = newChoice;
    }
    return;
}

int main() {

    int num1 = 1, num2 = 2, num3 = 1, num4 = 1, num5 = 2;
    int choice = NULL, answer = NULL;

    cout << "Created by: Makena Bustos" << endl;
    cout << "Hello! Welcome to our Investment Company" << endl;

    
    /* User login*/
    CheckUserPermissionAccess();

    /* Display Options*/
    while (choice != 3) {
        cout << "What would you like to do?" << endl;
        cout << "DISPLAY the client list (enter 1)" << endl;
        cout << "CHANGE a client's choice (enter 2)" << endl;
        cout<< "Exit the program .. (enter 3)" << endl;

        cin >> choice;        
        if (choice == 1) {
            cout << "You chose " << choice << endl;
            DisplayInfo(num1, num2, num3, num4, num5);
        } 
        else if (choice == 2) {
            cout << "You chose " << choice << endl;
            ChangeCustomerChoice(num1, num2, num3, num4, num5);
            
        }
        else if (choice == 3) {
            cout << "You chose " << choice << endl;
            return 1;
        }
    }

    return 0;
}