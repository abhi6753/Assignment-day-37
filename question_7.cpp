//7. Write a program to find sum of vector elements
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr ={1,2,3,4,5};
	int sum =0;
	for(auto i : arr)
	{
		sum+=i;
	}
	cout<<"sum of vector elements = "<<sum<<endl;
	return 0;
}
