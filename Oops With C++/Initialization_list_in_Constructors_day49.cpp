#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}*/
class mai
{
    int a;
    int b;

public:
    //mai(int i, int j) : a(i), b(j)
    //mai(int i, int j) : a(i), b(a+j)
    mai(int i, int j) : a(i), b(j*8)
    {
        cout << "the value in a is " << a << endl;
        cout << "the value in b is " << b << endl;
    }
};
int main()
{
    mai m1();
    mai(1,2);
    
    return 0;
}