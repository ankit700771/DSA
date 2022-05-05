#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int a[6][6] = {
			{1, 1, 1, 0, 0, 0},
			{0, 1, 0, 0, 0, 0},
			{1, 1, 1, 0, 0, 0},
			{0, 9, 2, -4, -4,0},
			{0, 0, 0, -2, 0, 0},
			{0, 0, -1, -2, -4, 0}
		      };
	vector<int> v;
	for(int i = 0; i<6-2 ;i++)
	{
		for(int j =0; j<6-2; j++)
		{
			int sum = 0;
			sum = sum + a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
			v.push_back(sum);
		}
	}
	cout<<*max_element(v.begin() , v.end());
}
