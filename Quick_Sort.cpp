#include <iostream>
using namespace std;

void quicksort (int arr[], int l, int r); // 1st Function
int partition (int arr[], int l, int r); // 2nd Function
void swap (int arr[], int i, int j); // 3rd Function

void quicksort (int arr[], int l, int r){ 
    if (l < r) {
        int p = partition(arr, l, r);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, r);
    } 
}
int partition (int arr[], int l, int r){
    int pivot = arr[r];
    int i = l -1;
    for (int j = l; j < r; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void swap (int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main(){
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

    // int arr[] = {23, 27, 25, 28, 29, 22, 21, 24, 26};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = sz - 1;
    quicksort(arr, l, r); // Sort the Array using Quick Sort Algorithm

    cout << "Sorted Array[]: ";
    for (int i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
        cout << arr[i] << " ";
    }
    return 0;
}