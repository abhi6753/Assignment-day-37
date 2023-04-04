//8. Write a program to find common elements between two vectors.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int>a={1,2,3,4,5};
	vector <int>b= {10,20,3,4,50};
	int size;
	size=a.size()>b.size()?a.size():b.size();
	cout<<"Common elements are : "<<endl;
	for(int i=0;i<size;i++)
	{
		if(a[i]==b[i])
		{
			cout<<a[i]<<endl;
		}
	}	
	return 0;
}
