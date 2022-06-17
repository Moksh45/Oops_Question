#include <iostream>
using namespace std;
template <class T1,class T2,class T3>
class demo{
    T1 num1;
    T2 char1;
    T3 Float1;
    public:
    demo(T1 a,T2 b,T3 c){
        num1 = a;
        char1 = b;
        Float1 = c;    }

    void display(){
        cout<<this->num1<<endl<<this->char1<<endl<<Float1;
    }
    
    
    };
    int main(){
        demo<int,string,float>t1(23,"Moksh",56.5);
        t1.display();
    }