#include <iostream>
using namespace std;

// int BinarySearch (int arr[], int sz, int target){
//         int s = 0; //Initial Starting Index
//         int e = sz - 1; //Initial Ending Index
//         while(s <= e){ 
//             int mid = (s + e) / 2; //Finding Mid Index
//             if (arr[mid] == target){ //Compare Mid Value with Target
//                 return mid;
//             } else if (arr[mid]> target){ //If Mid Value is Greater than Target
//                 e = mid-1;
//             } else { //If Mid Value is Less than Target
//                 s = mid + 1;
//             }
//         }
//         return -1; //If Target Not Found
//     cout << "No Value:(";
//     return -1; //Not Found
// }
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

    int s = 0; //Initial Starting Index
        int e = sz - 1; //Initial Ending Index
        while(s <= e){ 
            int mid = (s + e) / 2; //Finding Mid Index
            if (arr[mid] == target){ //Compare Mid Value with Target
                cout << "Target Found at Index: " << mid << endl;
                return 0;
            } else if (arr[mid]> target){ //If Mid Value is Greater than Target
                e = mid-1;
            } else { //If Mid Value is Less than Target
                s = mid + 1;
            }
        }
        cout << "No Value Found:(" << endl; 
    
    // int result = BinarySearch(arr,sz,target);
    // if (result != -1){
    //     cout << "Target Found at Index: " << result << endl;
    // } else {
    //     cout << "Target Not Found!" << endl;
    // } //Output Result
    return 0;
}
