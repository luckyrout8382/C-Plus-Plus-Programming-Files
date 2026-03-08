#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 1) {
        return 1; // Base case: sum of first 1 natural number is 1
    }
    return n + sum(n - 1); // Recursive case: n + sum of first (n-1) natural numbers
}

int main () {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a natural number (greater than 0)." << endl;
        return 1; // Exit with error code
    }

    int result = sum(n);
    cout << "The sum of the first " << n << " natural numbers is: " << result << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " = " << sum(i) << endl; // Print the sum of the first i natural numbers for each i from 1 to n
    }

    return 0; // Exit with success code
}