#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void getdata()
    {
        cout << "Enter Your Roll No Here ---> ";
        cin >> roll_number;
    }
    void display_roll_no();
};
void student ::display_roll_no()
{
    cout << "The Roll Number Of The student is " << roll_number << endl;
}
class exam : public student
{
protected:
    float math;
    float physics;

public:
    void getmark(float m1, float p1);
    void displaymark();
};
void exam ::getmark(float m1, float p1)
{

    math = m1;
    physics = p1;
}
void exam ::displaymark()
{
    cout << "Your Mark in Math and physics are \n Math-->" << math << "\n-->" << physics;
}

class result : public exam
{
    float result;

public:
    void displayresult()
    {
        cout << "You got " << (math + physics) / 2 << "%"
             << " in your exam";
    }
};

int main()
{
    result t1;
    t1.getdata();
    t1.display_roll_no();
    t1.getmark(94,95);
    t1.displayresult();

    return 0;
}