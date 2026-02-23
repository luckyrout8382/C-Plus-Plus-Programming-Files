#include <iostream>
using namespace std;

int main (){
    int n1, n2, temp;
    cout << "Enter 1st num: " ;
    cin >> n1;
    cout << "Enter 2nd num: " ;
    cin >> n2;
    cout << endl;

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "Your Swaping Values are: " << n1 << " " << n2 << endl;
    return 0;
}