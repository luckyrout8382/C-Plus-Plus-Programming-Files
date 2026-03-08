#include <iostream>
using namespace std;

void merge (int arr[], int l, int mid, int r);
void mergesort (int arr[], int l, int r);


void merge (int arr[], int l, int mid, int r){ // Merge Function
    int t1 = mid - l + 1; // Size of Left Subarray
    int t2 = r -  mid; // Size of Right Subarray

    int L[t1], R[t2]; // Temporary Arrays

    for (int i = 0; i < t1; i++){ // Copying Elements to Temporary Arrays
        L[i] = arr[l + i]; 
    }
    for (int j = 0; j < t2; j++){ // Copying Elements to Temporary Arrays
        R[j] = arr[mid + 1 + j]; 
    }

    int i = 0, j = 0 , k = l; // Merging the Temporary Arrays Back to Original Array

    while(i < t1 && j < t2){ 
        if (L[i] < R[j] ){ 
            arr[k] = L[i]; 
            i++; 
        }
        else{
            arr[k] = R[j]; 
            j++; 
        }
        k++; 
    }
    while(i < t1){ 
        arr[k] = L[i]; // Merging Left Subarray Element
        i++;k++; 
    }
    while(j < t2){ 
        arr[k] = R[j]; // Merging Right Subarray Element
        j++;k++;   
    }
}

void mergesort (int arr[], int l, int r){  // Merge Sort Function
    if (l < r){ 
        int mid = (l + r) / 2; 
        mergesort(arr, l, mid); // Sort the Left and Right Subarrays
        mergesort(arr, mid + 1, r); // Sort the Left and Right Subarrays
        merge(arr, l, mid, r); // Merge the Sorted Left and Right Subarrays
    }
}

int main () {
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
    
    mergesort(arr, 0, sz - 1);

    cout << "Sorted Array[]: ";
    for (int i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
        cout << arr[i] << " ";
    }
    return 0;
}