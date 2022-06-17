#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void addition(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void display(void)
    {
        cout << "Your Complex Number " << a << "+" << b << "i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.getdata(1,2);
    c1.display();

    c2.getdata(3,4);
    c2.display();

    c3.addition(c1,c2);
    c3.display();

    return 0;
}