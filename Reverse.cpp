//2 pointer approch
//Reverse array
//swap(arr[start], arr[end])
//odd array me swapping jab rokni hai tab 

#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz) {
    int start = 0 , end =sz-1;
    while(start < end) {
       swap(arr[start] ,arr[end]);
       start++;
       end--;
    }
}
 int main() {
 int arr[] = {4,2,7,8,1,2,5};
 int sz = 7;

 return 0;
 }