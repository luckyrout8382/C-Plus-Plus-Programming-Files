#include <iostream>
using namespace std;

int findExponent(int base, int exponent){
    if (exponent == 0){
        return 1;
    }else{
        return base * findExponent(base, exponent - 1);
    }
}
int main (){
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    int result = findExponent(base, exponent);
    cout << "|=> "<< base << " to the power " << exponent << " = " << result << endl;
    return 0;
}