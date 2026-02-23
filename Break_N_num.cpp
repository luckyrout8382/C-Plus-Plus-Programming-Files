#include <iostream>
using namespace std;

int main(){
    int i = 0, n, b;
	char c;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Can you add Break Point in this Loop. [Y/N]--> ";
    cin >> c;
    switch (c){
        case 'Y':cout << "Enter Break point: ";
                 cin >> b;
                 while(i <= n){
                   cout << i << endl;
                   if (i == b){
                    break;
                   }
                   i++;
                 }; break;
        case 'N': while(i <= n){
                    cout << i << endl;
                    i++;
                 }; break;
    }
    return 0;
}