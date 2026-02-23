#include <iostream>
using namespace std;

int main (){
    int num = 0;
    cout << "Enter Number: ";
    cin >> num;

    if (num % 2 == 0){
        cout << "Even Number" << endl;
        if (num / 2){
            cout << "Yes, This number is Divided by 2." << endl;
        }
    } else {
        cout << "Sorry, You Entered an Odd Number." << endl;
    }
    return 0;
}