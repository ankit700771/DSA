#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r , int k){
	priority_queue <int, vector<int>, greater<int> > p;
	for(int i = 0 ;i<=r; i++){
		p.push(arr[i]);
	}
	for(int i = 0; i<k-1; i++){
		p.pop();
	}
	return p.top();
}

int main(){
	int N = 6;
	int arr[] = {7, 10, 4, 3, 20, 15};
	int l = arr[0];
	int r = N-1;
	int k = 3;
	cout<<kthSmallest(arr , l , r, k);
}
