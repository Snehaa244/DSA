#include<iostream>
using namespace std;
int main() {
    int arr[] = {7,4,10,0,20,400,1,6,8};
    int n = sizeof(arr)/sizeof(int);
    int mx = arr[0];
    for(int i=1;i<n;i++){
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}