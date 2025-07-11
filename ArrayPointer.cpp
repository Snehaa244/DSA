// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];
//     // Printing array name
//     cout << arr << endl;
//     // Printing address of first element
//     cout << &arr[0];
//     return 0;
// }



//Defining the ponter to the first element
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 8, 12, 16};
    //Define a pointer to first element
    int* ptr = arr;

    for(int i = 0; i<5; i++)
    cout << *(ptr + i) << " ";

    return 0;
}