#include <iostream>
using namespace std;
class y;
class x
{
private:
    int val1;
    friend void swap(x &, y &);

public:
    void getdata(int x)
    {
        val1 = x;
    }
    void display()
    {
        cout << val1;
    }
};

class y
{
private:
    int val2;
    friend void swap(x &, y &);

public:
    void getdata(int y)
    {
        val2 = y;
    }
    void display()
    {
        cout << val2;
    }
};

void swap(x &a, y &b)
{
    int temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main()
{
    x c1;
    c1.getdata(5);
    y c2;
    c2.getdata(10);
    swap(c1, c2);
    cout << "the of c1 and c2 after swaping is ";
    c1.display();
    cout << " and ";
    c2.display();

    return 0;
}