#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,count;
	string s;
	string result;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n;
		cin>>s;
		result=s;
		for(int i=1;i<n;i++)
		{
			cin>>s;
			std::bitset<10> b= std::bitset<10>(result) ^ std::bitset<10>(s);
			result=b.to_string();
		}
		for(auto it:result)
		{
			if(it=='1')
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}
