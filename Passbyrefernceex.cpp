#include <iostream>
using namespace std ;

void doublearray (int arr[], int size) {
    for (int i=0 ; i<size; i++){
        arr[i] = 2 * arr[i];
    }
}
int main () {
int nums[] = {2,3,6,8,9};
int size = 5;

doublearray(nums,size);

cout<< "Doubled array"<< endl;
 for (int i=0 ; i<size; i++){
        cout<< nums[i] <<endl;
    }

return 0;
}
