#include <iostream>
using namespace std;
class derived;

class base 
{
public:
    int base;

    void display()
    {
        cout << " the value of a is " << base << endl;
    }
};
class derived : public base
{
public:
    int derived;

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
// base_pointer = &obj_dreived -->> is k koi faida nhi hai bass kyon ki aise karne kar bhi hum log bass base class ke object hi access kar sakte hai isliye


   //isk bhi use kar sakte hai -->>  base_pointer = &obj_base;
    base_pointer = &obj_dreived; //hum log base ko brevied se point kar sakta hai but hum log keval base ki chij ko hi access kar sakte hai
    base_pointer->base = 48;
    base_pointer->display();

   // derived_pointer=&obj_base; ->> giving error in this kyon ki is mai hum logo ne upar wale mai isliye possible tha kyonki usmai base class---->>> drevied class se inheritance thi  

    derived_pointer = &obj_dreived;
    derived_pointer->derived = 78;
    derived_pointer->display();
    //ismai tum log bass dreived class k object hi access kar sakte hai 

    return 0;
}
