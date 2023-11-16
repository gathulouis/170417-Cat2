#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limit;

    //  To get the user input for the limit
    cout << "Enter the limit for prime numbers: ";
    cin >> limit;

    // To print prime numbers up to the specified limit
    cout << "Prime numbers up to " << limit << " are: ";
    for (int i = 2; i <= limit; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
