#include<iostream>
using namespace std;

int main(){
    int product=1;
    int arr[]={7,5,8,9,4,5,6,3};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0; i<=n; i++) {
        product =  product  * arr[i];
    }
    cout<<product;
}