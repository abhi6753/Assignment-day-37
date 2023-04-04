//6. Write a program to reverse vector elements
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
	vector <int> arr ={10,20,30,40,50};
	cout<<"Vector elements : "<<endl;
	for(auto i:arr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Reverse Vector elements : "<<endl;
	int i=0;
	int j = arr.size()-1;
	while(i<j)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]= temp;
		i++;
		j--;
	}
	
for(auto x=arr.begin();x!=arr.end();x++)
{
	cout<<*x<<" ";
}
	return 0;
}
