#include <iostream>
using namespace std;

int main(){
    int nums[3] = {7,2,10};
    int ans = 12;

    for (int i = 0; i < 3;i++){
        if (nums[i] + nums[i + 1] == ans){ //Check if the sum of two numbers is equal to the target
            cout << "Index: " << i << " and " << i + 1 << endl;
        }
    }
    return 0;
}