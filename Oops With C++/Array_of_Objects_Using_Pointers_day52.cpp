#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;
    static int count;

public:
    void getdata(void)
    {
        cout << "Enter the iteam id and price: " << endl;
        cin >> id >> price;
    }
    void display();
};
int shop ::count = 1;
void shop ::display()
{
    cout << "the id of iteam " << count << " is " << id << endl;
    cout << "the price of iteam " << count << " is " << price << endl;
    count++;
}

int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    for (int i = 0; i < size; i++)
    {
        (*ptr).getdata();
        // ptr->getdata();
        ptr++;
    }
    ptr = (ptr - size);
    for (int i = 0; i < size; i++)
    {
        ptr->display();
    }

    return 0;
}