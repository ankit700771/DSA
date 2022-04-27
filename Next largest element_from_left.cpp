#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {11 , 6 , 42 , 65 ,32 ,54};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<size <<'\n';
	vector<int> result;
	stack<int> s;
	
	for(int i = 0 ; i<size; i++)
	{
		if(s.size() == 0){
			s.push(arr[i]);
			result.push_back(-1);
		}
		else if(s.top() > arr[i])
		{
			result.push_back(s.top());
			s.push(arr[i]);
		}
		else{
			while(s.size()!=0)
			{
				if(s.top()>arr[i])
				{
				    result.push_back(s.top());
					s.push(arr[i]);
					break;
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
