#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void getdata()
    {
        cout << "Enter your Roll Number" << endl;
        cin >> roll_number;
    }
    void display()
    {
        cout << "Your Roll Number is " << roll_number<<endl;
    }
};

class test : virtual public student
{
protected:
    int math;
    int physics;

public:
    void getdata()
    {
        cout << "Enter your mark in Math" << endl;
        cin >> math;
        cout << "Enter your mark in physics" << endl;
        cin >> physics;
    }

    void display()
    {

        cout << "Your Math Mark is " << math << endl;
        cout << "Your Physics Mark is " << physics << endl;
    }
};

class sport : virtual public student
{
protected:
    int score;

public:
    void getdata()
    {
        cout << "Enter your mark in Score" << endl;
        cin >> score;
    }

    void display()
    {

        cout << "Your Math Mark is " << score << endl;
    }
};
class result : public test, public sport
{
public:
    void display()
    {
        student :: getdata();
        student :: display();
        test :: getdata();
        test :: display();
        sport :: getdata();
        sport :: display();
        
        cout << "The Total Result Of Roll number " << roll_number << " is " << math + physics + score<<endl;
    }
};

int main()
{
    result R;
    R.display();
    
    return 0;
}