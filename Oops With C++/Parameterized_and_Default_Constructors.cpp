#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int x,int y);

    void display()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x , int y)
{
    a = x;
    b = y;
}

int main()

{
    complex a(5,6);
    a.display();

    complex b=complex(544,46);
    b.display();

    return 0;
}