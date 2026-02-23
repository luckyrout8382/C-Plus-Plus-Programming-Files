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
    
    int largest = arr[0]; //Assuming First Element is Largest
    int pos = 0; // Position of Largest Element

    for(i =0; i < sz - 1; i++){ //Find 2nd Largest Element
        if (arr[i] > largest){ 
            largest = arr[i]; //Update Largest Element
            pos = i; //Update Position
        }
    }
    cout << "2nd Largest Element: " << largest << endl; //Output 2nd Largest Element
    cout << endl;
    cout << "Position of 2ndLargest Element: arr[" << pos << "]" << endl; //Output Position of Largest Element
    cout << endl;
    return 0;
}