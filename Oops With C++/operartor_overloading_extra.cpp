#include <iostream>
using namespace std;
class complex
{
private:
    int x;
    int y;

public:
    complex() : x(0), y(0){};
    complex(int a, int b) : x(a), y(b){};
    void print();
    complex operator+(complex &);

    // opertor overloading doing friend function
    friend complex operator +(complex , complex);
};

void complex ::print()
{
    cout << "the sum of all object " << x << "+" << y << "i" << endl;
}

// complex complex ::operator+(complex &op)
// {
//     complex temp;
//     temp.x = x + op.x;
//     temp.y = y + op.y;
//     return temp;
// }
complex operator+(complex a1 , complex a2)
{
    complex temp;
    temp.x = a1.x+ a2.x;
    temp.y = a1.y +a2.y;
    return temp;
}

int main()
{
 complex a1(4,5);
 complex a2(7,8);
 complex temp;
 temp= a1+a2;
 cout <<"the sum of a1 and a2 is : " << temp;
    return 0;
}