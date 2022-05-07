#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	int d = 2;
	vector<int>::iterator it;
	stack<int> s;
	
	
	for(int i = 0; i<arr.size(); i++)
	{
		cout<<arr[i]<<'\t';
	}
	
	cout<<'\n';
	
	for(int i = d-1; i>=0; i--)
	{
		s.push(arr[i]);
		it = arr.begin() + i;
		arr.erase(it);
		
	}
	
	while(s.size()!=0)
	{
		arr.push_back(s.top());
		s.pop();
	}
	
	cout<<'\n';
	
	for(int i = 0; i<arr.size(); i++)
	{
		cout<<arr[i]<<'\t';
	}
}
