#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case  
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    for (int i = 0; i <= n; i++) {
        cout << " => " << i << "! = " << factorial(i) << endl;
    }
    return 0;
}