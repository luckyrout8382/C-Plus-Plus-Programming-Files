# include <iostream>
using namespace std;

int main (){
	int n, i, x;
	cout << "Enter Number of Table: ";
	cin >> n;
	
	for(i = 1; i <= 10; i++){
		x = n * i;
		cout << "\t" <<'|' << n << '*' << i << '=' << x << "\n";
	}
	return 0;
}
