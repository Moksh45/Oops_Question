#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void getdata(void){
        cout<<"enter the ID of employee"<<endl;
        cin>>id;
        
    }
    void displaydata(void){
        cout<<"This id of Employee is "<<(id+count)<<endl;
    }
};
int employee :: count; //using this way you can give the default value to the static variable
int main(){
    cout<<"Enter the Number How many empolyee are present ";
    int n;
    cin>>n;
    employee member[n];
    for (int i = 0; i < n; i++)
    {
        member[i].getdata();
        member[i].displaydata();
    
    }
    



    return 0;
}