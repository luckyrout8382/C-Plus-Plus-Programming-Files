#include <iostream>
using namespace std;
int main(){
	float num1, num2, sum = 0, sub = 0, mul = 0, div = 0, mod = 0;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
								//All Arithmatic Operation Performed.
	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	
	cout << "\n";
	cout << "The Sum of Numbers are: " << sum << "\n";
	cout << "The Substarction of Numbers are: " << sub << "\n";
	cout << "The Multiplication of Numbers are: " << mul << "\n";
	cout << "The Division of Numbers are: " << div << "\n";
	return 0;
}
