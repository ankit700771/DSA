#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r , int k){
	priority_queue <int> p;
	for(int i = 0; i<=r; i++){
		p.push(arr[i]);
		if(p.size()>k){
			p.pop();
		}
	}
	cout<<p.top();
}

int main(){
	int N = 6;
	int arr[] = {7, 10, 4, 3, 20, 15};
	int l = arr[0];
	int r = N-1;
	int k = 3;
	kthSmallest(arr , l , r, k);
}
