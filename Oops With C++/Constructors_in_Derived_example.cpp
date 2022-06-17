#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class base1
{
    int data1, data2;

public:
    base1(int a, int b)
    {
        data1 = a;
        data2 = b;
        cout << "Base1 constructor call" << endl;
    }
    void printdata1()
    {
        cout << "the value of data1 is " << data1 << " " << data2 << endl;
    }
};

class base2
{
    int data3;
    int data4;

public:
    base2(int a, int b)
    {
        data3 = a;
        data4 = b;
        cout << "Base2 constructor call" << endl;
    }
    void printdata2()
    {
        cout << "the value of data2 is " << data3 << " " << data4 << endl;
    }
};

class drived : public base2, public base1
{
    int drived3;
    int drived4;

public:
    drived(int a, int b, int c, int d, int e, int f) : base1(b, e), base2(d, f)
    {
        drived3 = a;
        drived4 = c;
    }
    void printdrived()
    {
        cout << "the value of data1 is " << drived3 << endl;
        cout << "the value of data1 is " << drived4 << endl;
    }
};

int main()
{
    drived moksh(1, 2, 3, 4, 6,7);
    moksh.printdata1();
    moksh.printdata2();
    moksh.printdrived();

    return 0;
}