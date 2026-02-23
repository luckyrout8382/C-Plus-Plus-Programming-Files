#include <iostream>
using namespace std;

int main (){
    int sz, i, temp, count = 1;
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

    while (count < sz){ //Bubble Sort Algorithm
        for (int i = 0; i < sz-count; i++){ //Compare Current Element with Next Element
            if (arr[i] > arr [i+1]){ //If Current Element is Greater than Next Element then Swap
                temp = arr[i]; 
                arr[i] = arr[i+1]; //Swapping
                arr[i+1] = temp; 
            }
        }
        count++;
    }

    cout << "Sorted Array[]: ";
    for(i = 0;i < sz;i++){
        cout << arr[i] << " ";
    } //Print Sorted Array Elements
    cout << endl;
    return 0;
}
