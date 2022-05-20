#include<iostream>
#include<algorithm>
using namespace std;

int result(int arr[] , int size)
{
	int max_sum = INT_MIN;
	int cur_sum = 0;
	for(int i = 0; i<size; i++)
	{
		cur_sum = cur_sum + arr[i];
		if(cur_sum > max_sum)
		{
			max_sum = cur_sum;
		}
		if(cur_sum < 0)
		{
			cur_sum = 0;
		}
	}
	return max_sum;
}

int main()
{
	int arr[] = {-1,-2,-3,-4};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<result(arr , size);
}
