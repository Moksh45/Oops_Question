#include <iostream>
using namespace std;
int main()
{
    // Basic Pointer
    
    int a = 1000;
    int *ptr = &a;
    cout << "the Value of a is " << *ptr<<endl;

    // new element
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}