// INT_MAX means largest pssible number in c++ mtlb infinite
//finding the largest and smallest in array


#include <iostream>
using namespace std;

int main() {
    int nums[] = {5,6,2,3,4,9};
    int size = 6;

    int smallest = INT16_MAX;
    for (int i=0; i<size; i++)
    {
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout << "smallest = " <<  smallest << endl;
    return 0;
}