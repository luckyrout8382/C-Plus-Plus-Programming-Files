#include <iostream>
using namespace std;

int main (){
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
    cout << endl;

    for (int i = 0; i < sz-1; i++){ //Selection Sort Algorithm
        for (int j = i+1; j < sz; j++){ //Compare Current Element with Remaining Elements
            if (arr[j] < arr[i]){ //If Current Element is Greater than Compared Element then Swap
                temp = arr[j]; 
                arr[j] = arr[i]; //Swapping
                arr[i] = temp; 
            }

        }
    }

    for (int i = 0; i<sz;i++){ //printing sorted array
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}