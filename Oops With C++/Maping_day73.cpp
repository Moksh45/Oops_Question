#include <iostream>
#include <map>
#include <string>
using namespace std;
int main (){
    map<string,int >mark;
    mark["Moksh"]=100;
    mark["Shurti"]=85;
    mark.insert({{"Hello",45},{"Zoting",2}});
    map<string,int>:: iterator itr;
    for  (itr=mark.begin() ;itr!=mark.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    

    return 0;
}