#include <iostream>
using namespace std;
class derived;

class base
{
public:
    int base;

    virtual void display()
    {
        cout << " the value of a is " << base << endl;
    }
};
class derived : public base
{
public:
    int derived = 12;

    void display()
    {
        cout << " the value of a in dreived is " << base << endl;
        cout << " the value of derived is " << derived << endl;
    }
};
int main()
{
    base *base_pointer;
    derived *derived_pointer;
    base obj_base;
    derived obj_dreived;


// agar hum log chahate hai ki base class k pointer jab -->> dreived class ko point kar ke toh hum logo ko simple base class ke function ko virtual function bana dena hai aur pura code same bass virtual banane se object k fuction chalne lagta hai Example -->>  virtual void display() ye karne se ab drived k display run hoga


    base_pointer = &obj_dreived;
    base_pointer->base = 48;
    base_pointer->display();
    return 0;
}