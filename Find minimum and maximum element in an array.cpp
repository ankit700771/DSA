#include<iostream>
using namespace std;

struct Max_Min
{
	int max;
	int min;
};

struct Max_Min pair_getMinMax(int array[] , int n)
{
	struct Max_Min a;
	a.max = array[0];
	a.min = array[0];
	for(int i = 1; i<n; i++)
	{
		if(a.max <= array[i]){
			a.max = array[i];
		}
		if(a.min > array[i]){
			a.min = array[i];
		}
	}
	return a;
}

int main()
{
	struct Max_Min result; 
	int N = 5;
	int A[] = {1, 345, 234, 21, 56789};
	result = pair_getMinMax(A , N);
	cout<<"max : "<<result.max<<" and minimum value : "<<result.min;
}
