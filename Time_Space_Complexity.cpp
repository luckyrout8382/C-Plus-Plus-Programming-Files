#include <iostream>
using namespace std;

	//Merge Sort
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
	        }else{
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
	
	//Quick Sort
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

// radix Sort
	int getmax(int arr[], int sz); // 1st Function
	void countsort(int arr[], int sz, int exp); // 2nd Function
	void radixsort(int arr[], int sz); // 3rd Function

	int getmax(int arr[], int sz){
	    int mx = arr[0];
	    for(int i = 1; i < sz; i++){
	        if(arr[i] > mx){
	            mx = arr[i];
	        }
	    } // this function is used to get the maximum element from the array to know the number of digits in the largest number
	    return mx;
	}
	void countsort(int arr[], int sz, int exp){
	    int output [sz];
	    int count [10] = {0}; //this is used to store the count of occurrences of digits in the array
	    for (int i = 0; i < sz; i++){
	        count [arr[i] / exp % 10] ++; // this is used to count the occurrences of digits in the array
	    }
	    for (int i = 1; i < 10; i++){
	        count [i] += count [i - 1]; // this is used to store the cumulative count of digits in the array
	    }
	    for (int i = sz - 1; i >= 0; i--){
	        int digit = (arr[i] / exp) % 10; // this is used to get the digit at the current exponent position
	        output [count[digit] - 1] = arr[i]; // this is used to store the sorted output in the output array
	        count [digit] --; // this is used to decrease the count of the digit in the count array
	    }
	    for (int i = 0; i < sz; i++){
	        arr[i] = output[i]; // this is used to copy the sorted output back to the original array
	    }
	}
	void radixsort(int arr[], int sz){
	    int m = getmax(arr, sz); // this is used to get the maximum element from the array to know the number of digits in the largest number
	    for (int exp = 1; m/exp > 0; exp *= 10){ // this is used to loop through the digits of the numbers in the array
	        countsort(arr, sz, exp); // this is used to sort the array based on the current exponent position
	    }
	}



int main(){
    int sz, i, n = 0;
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

	while (n != 4){
	    cout << "~What Action Perform?~" << endl;
	    cout << "-> 1) Searching Group." << endl << "-> 2) Sorting Group." << endl << "-> 3) Position Group." << endl << "-> 4) Exit" << endl << endl;
	
	    cout << "|-Please Select: ";
	    cin >> n;
	    cout << endl;
	
	    
	    switch (n){
	        case 1: cout << "You_Selected_Searching_Group." << endl << endl << "~What is Your Searching Type?~" << endl;
	                cout << "-> B/b -> Binary Search - if you arr write in accending order then it can apply or perform." << endl << "-> L/l -> Linear Search." << endl <<"-> E/e -> Exit" << endl << endl;
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
	                                            } cout << "No Value Found:(" << endl << endl; break;
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
	                                            } cout << "Target Not Found:(" << endl << endl; break;  
	                                        }
	                    case 'e' : case 'E': exit(0); break; //exit program
	                    default: cout << "!WRONG INPUT!"; break;
	                } break;
	
	        case 2: cout << "You_Selected_Sorting_Group." << endl << endl << "What is Your Sorting Type?~" << endl;
	                cout << "-> B/b -> Bubble Sort." << endl << "-> S/s -> Selection Sort." << endl << "-> I/i -> Insertion Sort." << endl << "-> m/M -> Merge Sort." << endl << "-> q/Q -> Quick Sort." << endl << "-> R/r -> Radix Sort." << endl <<"-> X/x -> Exchange Sort" << endl <<"-> e/E -> Exit" << endl << endl;
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
	                                            } cout << endl << endl; break;
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
	                                            } cout << endl << endl; break;
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
	                                            } cout << endl << endl; break;
	                                        }
	                    case 'm': case 'M':{ cout << "You_Selected_Merge_Sort." << endl << endl;								
											    // int arr[] = {23, 27, 25, 28, 29, 22, 21, 24, 26};
											    // int sz = sizeof(arr) / sizeof(arr[0]);
											    
											    mergesort(arr, 0, sz - 1);
											
											    cout << "Sorted Array[]: ";
											    for (int i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
											        cout << arr[i] << " ";
											    }cout << endl << endl; break;
	                                        }
	                    case 'Q': case 'q':{ cout << "You_Selected_Quick_Sort." << endl << endl;								
											    // int arr[] = {23, 27, 25, 28, 29, 22, 21, 24, 26};
											    // int sz = sizeof(arr) / sizeof(arr[0]);
											    
											    int l = 0, r = sz - 1;
    											quicksort(arr, l, r); // Sort the Array using Quick Sort Algorithm

    											cout << "Sorted Array[]: ";
   												for (int i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
       											cout << arr[i] << " ";
    											}cout << endl << endl; break;
	                                        }
    					case 'r': case 'R':{ cout << "You_Selected_Radix_Sort." << endl << endl;								
											    // int arr[] = {23, 27, 25, 28, 29, 22, 21, 24, 26};
											    // int sz = sizeof(arr) / sizeof(arr[0]);
											    
											   radixsort(arr, sz); // Sort the Array using Radix Sort Algorithm
											   cout << "Sorted Array[]: ";
												for (int i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
        												cout << arr[i] << " ";
    											}cout << endl << endl; break;
					                        }
					    case 'x': case 'X':{ cout << "You_Selected_Excahnge_Sort." << endl << endl;		//Exchange sort						
											   for (i = 0; i < sz - 1; i++){ //Compare Current Element with Next Elements
        											for (int j = i + 1;  sz > j; j++){ //If Current Element is Greater than Next Element then Swap
            											if (arr[i] > arr[j]){ //Swapping
                											int temp = arr[i];
                											arr[i] = arr[j];
                											arr[j] = temp;
            											}
        											}
    											}
    											cout << "Sorted Array is: ";	
    											for(i = 0;i < sz;i++){
        											cout << arr[i] << " ";
    											} //Print Sorted Array Elementscout << endl << endl; break;
					                        }cout << endl << endl; break;
	                    case 'e' : case 'E': exit(0); break; //exit program
	                    default: cout << "!WRONG_INPUT!"; break;
	                } break;
	
	        case 3: cout << "You_Selected_Position_Group." << endl << endl << "What is Your Position Type?~" << endl;
	                cout << "-> L/l -> Largest Element." << endl << "-> S/s -> Smallest Element." << endl << "-> E/e -> Exit" << endl << endl;
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
	                                            cout << endl << endl; break;
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
	                                            cout << endl << endl; break;
	                                        }
	                    case 'e' : case 'E': exit(0); break; //exit program
	                    default: cout << "!WRONG_INPUT!"; break;
	                    } break;
	        case 4: exit(0); break; // exiting program
	        default: cout << "!WRONG_INPUT!"; break;
	    }
	}
    return 0;
}
