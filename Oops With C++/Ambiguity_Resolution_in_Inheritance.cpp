#include <iostream>
using namespace std;
class base1
{
public:
    void display()
    {
        cout << "Hello World"<<endl;
    }
};
class base2
{
public:
    void display()
    {
        cout << "Namaste Duniya"<<endl;
    }
};

class derived : base1, base2
{
public:
    void display()
    {
        base1 ::display();
    }
};



class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};

int main()
{
    derived d1;
    d1.display();

    D d2;
    
    d2.say();
    return 0;
}