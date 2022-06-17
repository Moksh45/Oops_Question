#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void getdata(void);
    void displaydata(void);
    static void getCount(void){
        cout<<"The value of Count is "<< count<<endl<<endl;
    }
};
int employee :: count = 1000;
void employee ::getdata(void)
{
    cout << "Enter the Employee ID " << (count+1) <<endl;
    cin >> id;
    count++;
}

void employee ::displaydata(void)
{
    cout << "The Employee ID is " << id <<endl<<endl;
}
int main()
{
    employee moksh,kartikey,yash;
    moksh.getdata();
    moksh.displaydata();
    employee::getCount();

    kartikey.getdata();
    kartikey.displaydata();
    kartikey.getCount();

    yash.getdata();
    yash.displaydata();;
    yash.getCount();



    return 0;
}