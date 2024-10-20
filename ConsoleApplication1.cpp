#include<iostream>
using namespace std;

// Function prototypes
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(float a, float b);

int main() {
    int choice, a, b;
    float result;

    cout << "Calculator Menu: \n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 4) {
        float x, y;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        result = division(x, y);
        if (y != 0)
            cout << "Result: " << result << endl;
    }
    else {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (choice == 1)
            cout << "Result: " << addition(a, b) << endl;
        else if (choice == 2)
            cout << "Result: " << subtraction(a, b) << endl;
        else if (choice == 3)
            cout << "Result: " << multiplication(a, b) << endl;
        else
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Function definitions
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0)
        return a / b;
    else
        cout << "Division by zero error!" << endl;
    return 0;
}
