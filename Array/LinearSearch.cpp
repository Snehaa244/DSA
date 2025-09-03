#include<iostream>
using namespace std;
int main() {
    int arr[] = {7,4,10,0,20,4,1,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"ENTER TARGET:";
    cin>>x;
    bool flag = false; //false means absent
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true; //true means present
            break;
        }
    }
    if(flag==true) cout<<x<< "is present";
    else cout<<x<< "is not present";
}