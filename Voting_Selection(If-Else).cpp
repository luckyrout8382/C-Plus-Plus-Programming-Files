#include <iostream>
using namespace std;
int main(){
	int age;
	cout << "Enter Your Age: ";
	cin >> age;
	
	if (age >= 18){
		cout << "Yes, You Can Vote.\n";
		if (age >= 18 <= 30){
			cout << "You are now Yong Stage.\n";
		}
		
	}
	else {
		cout << "No, You are not Elegibale for Vote.";
	}
	return 0;
}
