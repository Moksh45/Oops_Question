#include <iostream>
using namespace std;
// class A
// {
//     int a;

// public:
//     void getdata(int a)
//     {
//         // This is a keyword which is a pointer which points to the object which invokes the member function

//         this->a = a;
//     }
//     void display()
//     {
//         cout << "this value of a in " << a;
//     }
// };

class A
{
    int a;

public:
    A setData(int a)
    {
        this->a = a;
        return this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};



int main()
{
    A a;
    // a.getdata(4);
    // a.display();

    a.setData(5).getData();
    return 0;
}
