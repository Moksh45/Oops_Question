#include <iostream>
#include <math.h>
using namespace std;
class simplecalculator
{
    int num1;
    int num2;

public:
    void get()
    {
        cout << "Enter first Number" << endl;
        cin >> num1;
        cout << "Enter Second Number" << endl;
        cin >> num2;
    }
    void display()
    {
        cout << "The Addition of two number is " << num1 + num2 << endl;
        cout << "The Subtraction of two number is " << num1 - num2 << endl;
        cout << "The Multiplecation of two number is " << num1 * num2 << endl;
        cout << "The Divide of two number is " << num1 / num2 << endl;
    }
};

class scitentificalculator
{
    int num1;
    int num2;

public:
    void get1()
    {
        cout << "Enter first Number" << endl;
        cin >> num1;
        cout << "Enter Second Number" << endl;
        cin >> num2;
    }
    void display1()
    {
        cout << "The Value of sin num1 and sin num2 " << sin(num1) << " and " << sin(num2) << endl;
        cout << "The Value of log num1 and log num2 " << log(num1) << " and " << log(num2) << endl;
        cout << "The Value of cos num1 and cos num2 " << cos(num1) << " and " << cos(num2) << endl;
        cout << "The Value of tan num1 and tan num2 " << tan(num1) << " and " << tan(num2) << endl;
    }};

class hybriedcalculator : public simplecalculator,public scitentificalculator{

};
int main(){
    hybriedcalculator h1;
    h1.get();
    h1.display();
    h1.get1();
    h1.display1();
}