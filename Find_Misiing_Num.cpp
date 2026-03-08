#include <iostream>
using namespace std;

int main () {
    int arr[] = {1, 2, 4, 5}; //Array of N-1 Elements
    int sz = sizeof(arr) / sizeof(arr[0]); //Size of Array
    
    int N = sz + 1; //Total Number of Elements (N)
    int total =  N * (N + 1) / 2; //Sum of First N Natural Numbers

    int sum = 0;
    for(int i = 0; i < sz; i++){
        sum = sum + arr[i];
    } //Sum of Array Elements
    
    int Missing_Num = total - sum; //Missing Number
    cout << "Missing Number is: " << Missing_Num; //Print Missing Number
    return 0;
}