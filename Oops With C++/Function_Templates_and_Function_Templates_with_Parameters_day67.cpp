#include <iostream>
using namespace std;
template <class t1>
void swapp(t1 &a, t1 &b)
{
    t1 temp;
    temp = a;
    a = b;
    b = temp;
    cout << a <<" "<< b;
}

int main()
{
    int a = 10, b = 15;
    swapp(a, b);
    return 0;
}