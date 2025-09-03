#include<iostream>
using namespace std;
int main() {
    int sum = 0;
    int arr[] = {7,0,5,6,9,8,5,6};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i<=n; i++)
    {
      sum =+arr[i];
    }
    cout<<sum;
}