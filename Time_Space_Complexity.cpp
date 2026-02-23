#include <iostream>
using namespace std;

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

    cout << "~What Action Perform?~" << endl;
    cout << "-> 1) Searching Group." << endl << "-> 2) Sorting Group." << endl << "-> 3) Position Group." << endl << endl;

    int n;
    cout << "|-Please Select: ";
    cin >> n;
    cout << endl;

    
    switch (n){
        case 1: cout << "You_Selected_Searching_Group." << endl << endl << "~What is Your Searching Type?~" << endl;
                cout << "-> B/b -> Binary Search." << endl << "-> L/l -> Linear Search." << endl << endl;
                char ch1;
                cout << "|-Select Search Type -> ";
                cin >> ch1;
                cout << endl;
                
                switch (ch1){
                    case 'b': case 'B': {cout << "You Selected Binary Search." << endl << endl;
                    					    int target;
                                            cout << "Enter Your Target to Search:";
                                            cin >> target;
                                            cout << "Your target is: " << target << endl << endl; //Input Target Value

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
                                            } cout << "No Value Found:(" << endl; break;
                                        }
                    case 'l': case 'L': {cout << "You Selected Linear Search." << endl << endl;
                                            int target;
                                            cout << "Enter Your Target to Search:";
                                            cin >> target;
                                            cout << "Your target is: " << target << endl << endl; //Input Target Value

                                            for(int i = 0; i < sz; i++){
                                                if(arr[i] == target){
                                                    cout << "Target Found at Index: " << i << endl;
                                                    return 0;
                                                }
                                            } cout << "Target Not Found:(" << endl; break;  
                                        }
                    default: cout << "!WRONG INPUT!"; break;
                } break;

        case 2: cout << "You_Selected_Sorting_Group." << endl << endl << "What is Your Sorting Type?~" << endl;
                cout << "-> B/b -> Bubble Sort." << endl << "-> S/s -> Selection Sort." << endl << "-> I/i -> Insertion Sort." << endl << endl;
                char ch2;
                cout << "|-Select Sorting Type -> ";
                cin >> ch2;
                cout << endl;

                switch (ch2){
                    case 'b': case 'B':{ cout << "You_Selected_Bubble_Sort." << endl << endl;
                    					    int temp, count = 1;
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
                                            } cout << endl; break;
                                        }
                    case 's': case 'S':{ cout << "You_Selected_Selection_Sort." << endl << endl; 
                                            int temp;
                                            for (int i = 0; i < sz-1; i++){ //Selection Sort Algorithm
                                                for (int j = i+1; j < sz; j++){ //Compare Current Element with Remaining Elements
                                                     if (arr[j] < arr[i]){ //If Current Element is Greater than Compared Element then Swap
                                                        temp = arr[j]; 
                                                        arr[j] = arr[i]; //Swapping
                                                        arr[i] = temp; 
                                                    }

                                                }
                                            }

                                            cout << "Sorted Array[]: ";
                                            for (int i = 0; i<sz;i++){ //printing sorted array
                                            cout << arr[i] << " ";
                                            } cout << endl; break;
                                        }
                    case 'i': case 'I':{ cout << "You_Selected_Insertion_Sort." << endl << endl;
                                            int temp, j;
                                            for (int i = 1; i < sz; i++){ //Insertion Sort Algorithm
                                                temp = arr[i];
                                                j = i-1;
                                                while (j >= 0 && arr[j] > temp){ //Compare Current Element with Previous Elements
                                                    arr[j+1] = arr[j]; //Shift Elements to Right
                                                    j--;
                                                }
                                                arr[j+1] = temp; //Insert Current Element at Correct Position
                                            }

                                            cout << "Sorted Array[]: ";
                                            for (int i = 0; i<sz;i++){ //printing sorted array
                                                cout << arr[i] << " ";
                                            } cout << endl; break;
                                        }
                    default: cout << "!WRONG_INPUT!"; break;
                } break;

        case 3: cout << "You_Selected_Position_Group." << endl << endl << "What is Your Position Type?~" << endl;
                cout << "-> L/l -> Largest Element." << endl << "-> S/s -> Smallest Element." << endl << endl;
                char ch3;
                cout << "|-Select Position Type -> ";
                cin >> ch3;
                cout << endl;

                switch (ch3){
                    case 'l': case 'L': {cout << "You_Selected_Largest_Element." << endl << endl;
                                            int largest = arr[0]; //Assuming First Element is Largest
                                            int pos = arr[0]; //Position of Largest Element

                                            for(i =0; i < sz; i++){ //Find Largest Element
                                                if (arr[i] > largest){ 
                                                    largest = arr[i]; //Update Largest Element
                                                    pos = i; //Update Position
                                                }
                                            }
                                            cout << "Largest Element: " << largest << endl; //Output Largest Element
                                            cout << endl;
                                            cout << "Position of Largest Element: arr[" << pos << "]" << endl; //Output Position of Largest Element
                                            cout << endl; break;
                                        } break;

                    case 's': case 'S': {cout << "You_Selected_Smallest_Element." << endl << endl;
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
                                            cout << endl; break;
                                        }
                    default: cout << "!WRONG_INPUT!"; break;
                    } break;
        default: cout << "!WRONG_INPUT!"; break;
    }
    return 0;
}
