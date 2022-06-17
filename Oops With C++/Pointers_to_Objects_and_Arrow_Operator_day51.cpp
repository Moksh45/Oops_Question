#include <iostream>
using namespace std;
class demo
{
    int real;
    int imagniary;

public:
    void getdata(int a, int b)
    {
        real = a;
        imagniary = b;
    }
    void display()
    {

        cout << "the real part of number is " << real<<endl;

        cout << "the imagniary part of number is " << imagniary<<endl;
    }
}; int main()
{
    demo *ptr = new demo;
    ptr->getdata(1,50);
    ptr->display();

 delete [] ptr;
    
    // Array of Objects
    demo *ptr1 = new demo [4]; 
    ptr1->getdata(1, 4); 
    ptr1->display();
    return 0;
}