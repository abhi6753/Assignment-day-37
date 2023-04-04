//5. Find largest and smallest elements in a vector
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
	vector<int> a = {19,32,43,23,1,43,54};
	vector<int > :: iterator x;
	x = a.begin();
	int smallest=a[0];
	for(auto i = a.begin();i!=a.end();i++)
	{
		if(smallest>*i)
		{
			smallest = *i;
		}
	}
	cout<<"Samllest element is "<<smallest<<endl;
	return 0;
}
