#include <iostream>
using namespace std;

int main () {
    int sz, i, temp;
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

    for (i = 0; i < sz - 1; i++){ //Compare Current Element with Next Elements
        for (int j = i + 1;  sz > j; j++){ //If Current Element is Greater than Next Element then Swap
            if (arr[i] > arr[j]){ //Swapping
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array is: ";
    for(i = 0;i < sz;i++){
        cout << arr[i] << " ";
    } //Print Sorted Array Elements
    return 0;
}