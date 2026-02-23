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
    
    int smallest = arr[0]; //Assuming First Element is Smallest
    int pos = arr[0]; //Position of Smallest Element

    for(i =0; i < sz; i++){ //Find Smallest Element
        if (arr[i] < smallest){ 
            smallest = arr[i]; //Update Smallest Element
            pos = i; //Update Position
        }
    }
    cout << "Smallest Element: " << smallest << endl; //Output Smallest Element
    cout << endl;
    cout << "Position of Smallest Element: arr[" << pos << "]" << endl; //Output Position of Smallest Element
    cout << endl;
    return 0;
}