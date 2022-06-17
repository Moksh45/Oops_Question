// Multiple Inheritance example

#include <iostream>

using namespace std;
class base1
{
protected:
    int data1;

public:
    void getdata()
    {
        cout<<"Enter the value of Data1"<<endl;
        cin>>data1;
        
    }
};

class base2
{
protected:
    int data2;

public:
    void getdata1(int a = 0)
    {
       cout<<"Enter the value of Data2"<<endl;
        cin>>data2;
    }
};
class derived : protected base1,protected base2
{public:
    void display()
    {
        getdata();
        getdata1();
        cout << "The Value In Data1 is " << data1 << endl;
        cout << "The Value In Data2 is " << data2 << endl;
        cout << "The Sum of Data1 + Data2 is " << data1 + data2 << endl;
    }
};
int main()
{
    derived d1;
    d1.display();

    return 0;
}
