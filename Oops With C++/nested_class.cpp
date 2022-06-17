#include <iostream>
#include <string>
using namespace std;
class demo
{
private:
    string s;
    void check(void);

public:
    void read(void);
    // void check(void);
    void ones_compliment(void);
    void display(void);
};

void demo ::read(void)
{
    cout << "Enter the number" << endl;
    cin >> s;
}

void demo ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout << "Incorrect Binary Number" << endl;
        exit(0);
    }}
}
void demo::ones_compliment(void)
{
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void demo ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

    cout << endl;
}

int main()
{
    demo m;
    m.read();

     m.check();
    m.ones_compliment();
    m.display();
    return 0;
}