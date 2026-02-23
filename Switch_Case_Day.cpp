#include <iostream>
using namespace std;

int main() {
	int day;
	cout << "Hello sir, Please enter Valid Day num in 1-7: ";
	cin >> day;
	switch (day) {
		case 1: cout << "Monday";break;
		case 2: cout << "Tuesday";break;
		case 3: cout << "Wednesday";break;
		case 4: cout << "Thursday";break;
		case 5: cout << "Friday";break;
		case 6: cout << "Sutarday";break;
		case 7: cout << "Sunday";break;
		default: cout << "!Invalid Day Number!" << endl;
	}
	cout << endl << "Dhanyawaad..";
	return 0;
}