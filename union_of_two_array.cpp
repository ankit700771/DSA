#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> set;
	int arr[] = {85,25,1,32,54,6};
	int size_of_array_one = sizeof(arr)/sizeof(arr[0]);
	int array_2[] = {85 , 2};
	int size_of_array_2 = sizeof(array_2)/sizeof(array_2[0]);
	for(int i = 0; i<size_of_array_one; i++)
	{
		set.insert(arr[i]);
	}
	for(int i = 0; i<size_of_array_2; i++)
	{
		set.insert(array_2[i]);
	}
	
	cout<<set.size();
	
}
