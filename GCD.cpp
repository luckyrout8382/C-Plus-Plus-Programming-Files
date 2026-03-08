#include <iostream>
using namespace std;

int gcd(int a, int b){
    int remainder;
    remainder = a % b;
    if (remainder == 0){
        return b;
    }
    else{
        return gcd(b, remainder);
    }
}
int main (){
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "The GCD of " << a << " and " << b << " = " << gcd(a, b) << endl;
    return 0;
}