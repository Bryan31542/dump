#include <iostream>

using namespace std;

void input(float &a, float &b);
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {

    int option;
    float a, b;

    cout << "\n\t Calculator \n\n";
    cout << "Choose an option: \n";
    cout << "1. Add \n";
    cout << "2. Subtract \n";
    cout << "3. Multiply \n";
    cout << "4. Divide \n";
    cout << "5. Exit \n";

    cout << "Enter your option: ";
    cin >> option;

    switch (option) {
        case 1:
            input(a, b);
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            input(a, b);
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            input(a, b);
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            input(a, b);
            cout << "Result: " << divide(a, b) << endl;
            break;
        case 5:
            cout << "Exiting... \n";
            break;
        default:
            cout << "Invalid option \n";
            break;
    }
    return 0;
}

void input(float &a, float &b) {
    cout << "\nEnter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Division by zero \n";
        return 0;
    } else 
        return a / b;
}