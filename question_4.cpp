//4. Write a program to Copy one vector’s elements to another vector.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int > a = {1,2,3,4,5};
    vector<int> b;
    b = a;
    cout<<"Copy Elemenet is :"<<endl;
    for(auto i: b)
    {
      cout<<i<<" ";
    }
    cout<<endl;
 return 0;
}
