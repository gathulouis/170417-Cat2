#include <iostream>

using namespace std;

int main()
 {
    double num1, num2, num3;
    
    // Input three numbers from  user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Use a switch statement to determine  maximum number
    switch (num1 > num2 || num2>num3 || num3>num1) {
        case true:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case false:
            cout << "The maximum number is: " << num3 << endl;
            break;
    }

    return 0;
}
