#include<iostream>
#include<string>
using namespace std;

string reverse_string(string str){
	int size = str.length();
	int j = size -1;
	char temp;
	if(size % 2 == 0){
		for(int i = 0; i<size/2; i++)
		{
			temp = str[i];
			str[i] = str[j-i];
			str[j-i] = temp;
		}
	}
	else
	{
		for(int i = 0; i<size/2; i++){
			temp = str[i];
			str[i] = str[j-i];
			str[j-i] = temp;
		}
	}
	return str;
}

int main(){
	string str = "for";
	str = reverse_string(str);
	cout<<str;
}
