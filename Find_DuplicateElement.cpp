#include <iostream>
using namespace std;

int main (){
    int sz, i;
    cout << "Enter Size of Arr[]: ";
    cin >> sz; 
    cout << endl; //Input Array Size

    int arr[sz];
    for(i = 0; i < sz; i++){
            cout << "Enter " << i+1 << " Element: ";
            cin >> arr[i];
    } //Input Array Elements
    cout << endl;
    
    cout << "Your Array[]: ";
    for(i = 0;i < sz;i++){
        cout << arr[i] << " ";
    } //Print Array Elements
    cout << endl << endl;

    cout << "Your Duplicate Value is: ";
    int count, temp, j,dc = 0;
    for (i = 0; i < sz; i++){
        for (j = 0; j < sz; j++){
            if (arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        } //WRONG OTPUT
        
    }

    cout << endl;
    return 0;
}
