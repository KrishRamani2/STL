#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> v={2,3,4,5,6,7,8,9};
    v.insert(20);
    v.insert(23);
    cout<<" Using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;
    set<int>::iterator itr;
    cout<<"Using Iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    cout<<*itr<<endl;
}