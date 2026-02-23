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
    cout << endl;

    for (int i = 1; i < sz; i++){ //Insertion Sort Algorithm
        int key = arr[i]; //Current Element
        int j = i - 1; //Previous Element

        while (j >= 0 && arr[j] > key){ //Compare Current Element with Previous Elements
            arr[j + 1] = arr[j]; //Shift Previous Element to the Right
            j--; 
        }
        arr[j + 1] = key; //Insert Current Element at its Correct Position
    }
    
    cout << "Sorted Array[]: ";
    for(i = 0;i < sz;i++){
        cout << arr[i] << " ";
    } //Print Sorted Array Elements
    cout << endl;
    return 0;
}