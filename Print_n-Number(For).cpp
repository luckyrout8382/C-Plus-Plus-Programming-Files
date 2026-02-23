#include <iostream>
using namespace std;
int main(){
	int n,i;
	cout << "Enter Number: ";
	cin >> n;
	
	for(i=0; i<=n; i++){
		cout << "\t" << '|' << i <<"\n";
	}
	return 0;
}

