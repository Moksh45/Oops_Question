#include <iostream>
#include <list>
using namespace std;
// template <class T>
void display(list<int> &lst)
{
    list<int>::iterator it1;
    for (it1 = lst.begin(); it1 != lst.end(); it1++)
    {
        cout << *it1 << " ";
    }
}

int main()
{
    int element;
    list<int> list1; // empty list of size zero

    list1.push_back(12);
    list1.push_back(7);

    for (int i = 0; i < 5; i++)
    {
        cout << "enter the element which you want to enter in list " << endl;
        cin >> element;
        list1.push_back(element);
    }
    cout << "\n\n\n\n";

    // list <int> :: iterator it1;
    // it1 = list1.begin();
    // cout<<*it1<<" ";
    display(list1);
    cout << endl;
    // Removing element from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(12);

    // sorting the list
    // list1.sort();

    //for reverseing the list
    list1.reverse();
    display(list1);
    cout << endl;
    cout << endl;
    cout << endl;

    // Empty list of size 3
    list<int> list2(3);
    list<int>::iterator it2;
    it2 = list2.begin();
    *it2 = 45;
    it2++;
    *it2 = 90;
    it2++;
    *it2 = 135;
    it2++;

    display(list2);
    cout << endl;
    list1.sort();
    list2.sort();

    // how to merging two list
    list1.merge(list2);
    cout << "List 1 after merging is : ";
    display(list1);
    cout << endl;

    return 0;
}
