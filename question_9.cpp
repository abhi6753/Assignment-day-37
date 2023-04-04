//9. Write a program to Push and print elements in a float vector.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<float> arr;
    int limit;
    cout<<"Enter number of elements: ";
    cin>>limit;
    float input;
    cout<<"Enter "<<limit <<" elements : "<<endl;
    for(int i=0;i<limit;i++)
    {
    	cin>>input;
    	arr.push_back(input);
	}
	cout<<"Vector elements are: "<<endl;
	for(auto i:arr)
	{
		cout<<i<<" ";
	}
	return 0;
}
