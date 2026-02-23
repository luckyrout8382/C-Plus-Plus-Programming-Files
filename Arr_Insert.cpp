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

    int insertElement = 11;
    int insertPosition = 2; // Position where the new element will be inserted (0-based index)
    
    // Shift elements to the right starting from the insert position
    for (int i = sz - 1; i > insertPosition; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element
    arr[insertPosition] = insertElement;
    
    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
} 