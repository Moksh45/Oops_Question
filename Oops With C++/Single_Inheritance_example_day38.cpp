#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}

 class drived : base //public base
{
    int data3;

public:
    void process();
    void display();
};
void drived ::process()
{
    setdata();
    data3 = getdata1() * data2;
}
void drived ::display()
{
    cout << "Value of data 1 is " << getdata1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    drived D1;
    // D1.setdata();
    D1.process();
    D1.display();
    return 0;
}