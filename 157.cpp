#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> v={2,3,4,5,6,7,8,9};
    v.push_front(20);
    v.push_front(23);
    cout<<" Using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;
    forward_list<int>::iterator itr;
    cout<<"Using Iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    cout<<++*itr<<endl;
}