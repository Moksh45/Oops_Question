#include <iostream>
using namespace std;
class shop
{
    int iteamID[100];
    int iteamprice[100];
    int count;

public:
    void initialize(void) { count = 0; }
    void setprice(void);
    void diplaceprice(void);
};

void shop::setprice(void)
{
    cout << "Enter the Iteam id of iteam number " << (count + 1) << endl;
    cin >> iteamID[count];
    cout << "Enter the price of your iteam" << endl;
    cin >> iteamprice[count];
    ++count;
}
void shop ::diplaceprice(void)
{
    for (int i = 0; i < count; i++)
    {

        cout << "The Price Of Iteam with id " << iteamID[i] << " is " << iteamprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initialize();
    int num;
    cout << "Enter The total Number of Iteam"<<endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        dukaan.setprice();
    }

    dukaan.diplaceprice();

    return 0;
}