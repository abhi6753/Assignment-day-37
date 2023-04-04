//3. Write a function to print the element of a vector and take input from the user.
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
   return 0;
}

