#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary;

    employee(int a)
    {
        id = a;
        salary = 34.00;
    }
    employee()
    {
    }
};
class programmer : public employee
{
public:
int languagecode;
    programmer(int intID)
    {
        id = intID;
         languagecode= 9;
    }

    void display(){
        cout<<"the language code is "<<languagecode<<"\n";
    }

};

int main()
{
    employee shurti(1), sarthak(), yash();
    cout << shurti.id << endl;
    cout << shurti.salary << endl;
    programmer p1(1);
    cout << p1.id<<endl;
    p1.display();
    cout<<p1.languagecode<<endl;


    return 0;
}