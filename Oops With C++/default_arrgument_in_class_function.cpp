#include <iostream>
using namespace std;
class demo
{
    int a, b, c;

public:
    void get(int x, int y = 9, int z = 10)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of data1 data2 and data3 is " << a << " " << b << " and " << c;
    }
};
int main()
{
    demo d1;
    d1.get(1);
    d1.display();
    
    return 0;
}