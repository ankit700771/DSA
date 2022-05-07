#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main()
{
	vector<string> strings;
	strings.push_back("ab");
	strings.push_back("ab");
	strings.push_back("abc");
	
	vector<string> queries;
	queries.push_back("ab");
	queries.push_back("abc");
	queries.push_back("bc");
	
	vector<int> result;
    for(int i = 0; i<queries.size(); i++)
    {
        int count = 0;
        for(int j = 0; j<strings.size(); j++)
        {
            if(queries[i] == strings[j])
            {
                count = count + 1;
            }
        }
        result.push_back(count);
    }
    
    
    for(int i = 0; i<result.size(); i++)
    {
    	cout<<result[i]<<'\t';
	}
}
