#include <iostream>
using namespace std;

int main(){
    int i = 0, n, b;
	char c;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Can you add Continue Point in this Loop. [Y/N]--> ";
    cin >> c;
    switch (c){
        case 'Y':cout << "Enter Continue point: ";
                 cin >> b;
                 while(i <= n){
                   if (i == b){
                    i++;
                    continue;
                   }
                   cout << i << endl;
                   i++;
                 }; break;
        case 'N': while(i <= n){
                    cout << i << endl;
                    i++;
                 }; break;
    }
    return 0;
}