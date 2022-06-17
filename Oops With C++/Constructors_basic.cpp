#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(void);
    void printdata()
    {
        cout << "Your complex number is " << a << " + " << b << "i"<<endl;
    }
};
// construtcors are use to give the default value
complex ::complex(void)
{
    a = 10;
    b = 20;
};

int main()
{
    complex c1, c2, c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;
}