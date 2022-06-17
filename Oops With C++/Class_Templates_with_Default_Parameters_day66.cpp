#include <iostream>
using namespace std;
template <class T1 = int, class T2 = string, class T3 = float>

class Demo
{
    T1 num1;
    T2 num2;
    T3 num3;

public:
    Demo(T1 a, T2 b, T3 c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void display()
    {
        cout << this->num1 << endl
             << this->num2 << endl
             << this->num3 << endl
             << endl;
    }
};
int main()
{
    Demo<> ob(76, "Moksh", 99.00999);
    ob.display();
    Demo<double, long long int, char> ob1(8833.5555, 9451744778841, 'c');
    ob1.display();
    return 0;
}
