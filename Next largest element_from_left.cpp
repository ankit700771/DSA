#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {1 , 3 , 2 , 4};
	int size = sizeof(arr)/sizeof(arr[0]);
	vector<int> result;
	stack<int> s;
	
	for(int i = 0 ; i<size; i++)
	{
		if(s.size() == 0){
			s.push((arr[i]));
			result.push_back(-1);
		}
		else if(s.top() > arr[i])
		{
			result.push_back((arr[i]));
			s.push(arr[i]);
		}
		else{
			while(s.size()!=0)
			{
				if(s.top()>arr[i])
				{
					s.push(arr[i]);
					result.push_back(arr[i]);
				}
				else{
					s.pop();
				}
			}
			if(s.size() == 0)
			{
				s.push(arr[i]);
				result.push_back(-1);
			}
		}
	}
	
	for(int i = 0; i<result.size(); i++)
	{
		cout<<result[i]<<'\t';
	}
}
