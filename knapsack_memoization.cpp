#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int t[10][10];
int knapsack(int wt[] , int value[] , int w , int n){
	if(n == 0 || w == 0){
		return 0;
	}
	else if(t[n][w] != -1){
		return t[n][w];
	}
	else if(wt[n-1]<=w){
		return t[n][w] = max(value[n-1] + knapsack(wt , value , w - wt[n-1] , n-1) , knapsack(wt , value ,w , n-1));
	}
	else{
		return t[n][w] = knapsack(wt , value ,w , n-1);
	}
}


int main(){
	memset(t , -1 , sizeof(t));
	int n , m , size , capacity;
	cout<<"Enter How many element in weight array and value array : "<<'\n';
	cin>>n;
	int wt[n] , value[n];
	for(int i = 0; i<n; i++){
		cout<<"Enter a "<<i+1<<" element of weight array : "<<'\t';
		cin>>wt[i];
		cout<<'\n';
		cout<<"Enter a "<<i+1<<" elemet of value array : "<<'\t';
		cin>>value[i];
		cout<<'\n';
	}
	cout<<"Enter a capacity of knapsack : "<<'\n';
	cin>>capacity;
	
	int result = knapsack(wt , value , capacity , n);
	cout<<"weight array : "<<'\t';
	for(int i = 0; i<n; i++){
		cout<<wt[i]<<'\t';
	}
	cout<<'\n';
	
	cout<<"value array : "<<'\t';
	for(int i = 0; i<n; i++){
		cout<<value[i]<<'\t';
	}
	cout<<'\n';
	
	cout<<"Capacity of knapsack : "<<capacity<<'\n';
	
	cout<<"You got max proft of : "<<result;
	
	
	
}
