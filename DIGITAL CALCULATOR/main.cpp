// Written by JATINDRA PATEL
// INTERN AT CIPHERBYTE TECHNOLOGY
#include <iostream>

using namespace std;

// Function prototypes
void showMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    char operation;
    bool continueCalc = true;

    while (continueCalc) {
        showMenu();
        cout << "Enter your choice (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q') {
            continueCalc = false;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please try again." << endl;
                break;
        }
    }

    cout << "Calculator closed." << endl;
    return 0;
}

void showMenu() {
    cout << "Simple Digital Calculator" << endl;
    cout << "=========================" << endl;
    cout << "Available operations:" << endl;
    cout << "+ : Addition" << endl;
    cout << "- : Subtraction" << endl;
    cout << "* : Multiplication" << endl;
    cout << "/ : Division" << endl;
    cout << "q : Quit" << endl;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

