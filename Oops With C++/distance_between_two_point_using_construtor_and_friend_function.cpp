#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x;
    int y;

public:
    friend void distance(point, point);
    void getdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint(void)
    {
        cout << "the point is (" << x << " , " << y << ")" << endl;
    }
};

void distance(point p1, point p2)
{
    int x1, y1;
    x1 = p2.x - p1.x;
    y1 = p2.y - p1.y;
    cout << "the distance between two point is " << sqrt((x1 * x1) + (y1 * y1));
}
int main()
{
    point p1, p2;
    p1.getdata(1, 2);
    p2.getdata(4, 5);
    cout<<"\n";
    distance(p1,p2);
    return 0;
}