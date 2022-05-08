#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int arr[] = {0, 2, 1, 2, 0};
	int size = sizeof(arr)/sizeof(arr[0]);
	int one = 0 , two = 0 , zero = 0;
	for(int i = 0; i<size; i++)
	{
		if(arr[i] == 0)
		{
			zero = zero + 1;
		}
		else if(arr[i] == 1)
		{
			one = one + 1;
		}
		else
		{
			two = two + 1;
		}
	}
	
	for(int i = 0; i<zero; i++)
	{
		arr[i] = 0;
	}
	
	for(int i = zero; i<zero + one; i++)
	{
		arr[i] = 1;
	}
	
	for(int i = zero + one; i<zero + one + two; i++)
	{
		arr[i] = 2;
	}
	
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<'\t';
	}
}
