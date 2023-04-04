//10. Write a program to check whether an element exists in a vector or not.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	if(!a.empty())
	{
		cout<<"Vector element exists."<<endl;
	}
	else
	{
		cout<<"Vector element does not exists."<<endl;
	}
	a.push_back(2); // here i'm push element in vector
	if(!a.empty())
	{
		cout<<"Vector element exists."<<endl;
	}
	else
	{
		cout<<"Vector element does not exists."<<endl;
	}
	return 0;
}
