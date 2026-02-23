#include <iostream>
using namespace std;

int main() {
	int n,a,b;
	cout << "Enter the Number of Star--->";
	cin >> n;
    
	for(a=1;a<=n;a++){ //Outer Loop
		for(b=1;b<=a;b++){ //Iner Loop
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}