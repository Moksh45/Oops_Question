#include <iostream>
using namespace std;

class y;
class x
{
    int num;

public:
    void getdata(int a)
    {
        num = a;
    }
    friend int add(x,y);
};

class y
{
private:
    int value;

public:
    void getdata(int b)
    {
        value = b;
    }
    friend int add(x,y);
};

int add(x o1, y o2)
{
    return (o1.num + o2.value);
}

int main()
{
    x a;
    a.getdata(5);
    y b;
    b.getdata(5);
    cout<<"The sum of class x value and y value is "<<add(a,b);
    return 0;
}