#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;
template<class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of an element "<<endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    { cout<<"Enter the elment of an vector \n";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    cout<<"\n\n New vector run from here\n\n\n";
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,10,369);
    

    display(vec1);
    
    return 0;
}