#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int arr[] = { 1,3,2,4 };
	int size = sizeof(arr)/sizeof(arr[0]);
	stack<int> s;
	vector<int> result;
	
	for(int i = size-1; i>=0; i--)
	{
		if(s.size() == 0)
		{
			result.push_back(-1);
			s.push(arr[i]);
		}	
		else if(s.top()>arr[i])
		{
			result.push_back(s.top());
			s.push(arr[i]);
		}
		else
		{
			while(s.top()<arr[i])
			{
				s.pop();
			}
			if(s.size() == 0)
			{
				result.push_back(-1);
				s.push(arr[i]);
			}
			else
			{
				result.push_back(s.top());
				s.push(arr[i]);
			}
		}
	}
	reverse(result.begin() , result.end());
	for(int i = 0 ; i<result.size(); i++)
	{
		cout<<result[i]<<'\t';
	 } 
}
