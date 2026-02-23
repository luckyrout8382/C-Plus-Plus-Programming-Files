#include <iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout << "Enter N Number to Print: ";
    cin >> n;

    while(i <= n){
        cout << "\t" << i;
        i++;
    }
    return 0;
}