#include<iostream>
using namespace std;

int main()
{
	int arr[] = {5 , 2 , 14 , 12 , 19 , 4};
	int n = 6;
	for(int i = 0; i<n; i++)
	{
		int min_index = i;
		for(int j = i+1; j<n; j++)
		{
			if(arr[min_index]>=arr[j])
			{
				min_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp; 
	}
	
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<'\t';
	}
}
