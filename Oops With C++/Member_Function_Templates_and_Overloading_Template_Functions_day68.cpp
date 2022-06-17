#include <iostream>
using namespace std;
template <class T>
//member function overloading in class aur the example of how to declared the tamplate out side the class
class demo
{
public:
    T data;
    demo(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void demo<T>::display()
{
    cout << data;
}
// function overloading using tamplate
void fun(int a){
    cout <<"Hello this is fun"<<endl; 
}
template <class T>
void fun(T a){
    cout<<"this is fun1"<<endl;
}
int main()
{//for using class umcomment line 30 31
    // demo<int> d1(10);
    // d1.display();

    fun(10);
    fun(14.55);
    return 0;
}