#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex(void)
    {
        x = 0;
        y = 0;
    }
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex(int a)
    {
        x = a;
        y = 0;
    }
    void display()
    {
        cout << "the value of x and y are: " << x << " and " << y;
        cout<<"\n";
    }
};

int main()
{
    complex c1;
    c1.display();

    complex c2(5);
    c2.display();

    complex c3(1,3);
    c3.display();
}
