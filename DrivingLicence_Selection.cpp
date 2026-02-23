# include <iostream>
using namespace std;
int main(){
	int age;
	cout << "Enter the age: ";
	cin >> age;
	if (age > 18){
		cout << "You can apply for Driving Licence.";
	}
	else {
		cout << "You are not Eligible Applying for Driving Licence.";
	}
	
	return 0;
}
