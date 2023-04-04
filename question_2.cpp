//2. Declare a vector without initialization, insert some elements and print
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int limit,in;
    cout<<"Enter number of element you want to insert : "<<endl;
    cin>>limit;
    vector<int> a;
    for(int  i=0;i<limit;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    for(auto x = a.begin(); x != a.end() ; ++x)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    cout<<"capacity = "<<a.capacity()<<endl;
    cout<<"size = "<<a.size()<<endl;
   return 0;
}
