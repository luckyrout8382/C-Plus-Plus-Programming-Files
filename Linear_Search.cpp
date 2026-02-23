#include <iostream>
using namespace std;

int linearSearch (int arr[], int sz, int target);
int linearSearch (int arr[], int sz, int target){
    for (int i = 0; i < sz; i++){
        if (arr[i] == target){ //Compare Each Element with Target
            cout << "Yes your value " << arr[i] << " is Right:)" << endl << "Which Index is: " << i; //Found
            return i;
        }
    }
    cout << "No Value:(";
    return -1; //Not Found
}
int main() {
    int sz, i, target;
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
    cout << "If your target is matched then return target index value neither return a negetive value.!\n" << endl;
    
    cout << "Enter Your Target to Search:";
    cin >> target;
    cout << "Your target is:" << target << endl << endl; //Input Target Value
    
    linearSearch(arr,sz,target);
    
    return 0;
}
