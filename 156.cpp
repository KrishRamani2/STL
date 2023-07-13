#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> v={2,3,4,5,6,7,8,9};
    v.push_back(20);
    v.push_back(23);
    v.pop_back();
    cout<<" Using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;
    list<int>::iterator itr;
    cout<<"Using Iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    cout<<++*itr<<endl;
}