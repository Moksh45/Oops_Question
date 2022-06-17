#include <iostream>
using namespace std;
int count = 0;
class num
{

public:
    num()

    {
        count++;
        cout << "this is the time when constructorn call " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when destructor call " << count << endl;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "enter the Block Num1" << endl;
        num n2, n3;
        cout << "Exit the block" << endl;
    }
    cout << "main " << endl;

    return 0;
}
