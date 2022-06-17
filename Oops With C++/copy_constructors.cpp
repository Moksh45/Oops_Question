#include <iostream >
using namespace std;
class number
{
private:
    int a;
    int b;

public:
    number()
    {
        a = 0;
        b = 0;
    }
    number(int x, int y)
    {
        a = x;
        b = y;
    }
    number(number &a1){
        cout<<"call Copy constructor ";
        a= a1.a;

    }
    void display()
    {
        cout << "the data present in a is " << a << " And " << b << endl;
    }

};
int main()
{
    number n1,n2(5,4),n6;
    // n1.display();
    // number n3;
    // n3.display();
    n6=n2;
    n6.display();


    return 0;
}