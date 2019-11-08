#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unordered_map<int,int> mp;
	vector<int> r;
	r.push_back(0);
	mp[0]=0;
	r.push_back(0);
	for(int i=2;i<128;i++)
	{
		if(mp.find(r[i-1])!=mp.end())
		{
			r.push_back(i-1-mp[r[i-1]]);
			mp[r[i-1]]=i-1;
		}
		else
		{
			r.push_back(0);
			mp[r[i-1]]=i-1;
			
		}
	}
	int t,x;
	int n;
	cin>>t;
	int count;
	while(t--)
	{
		count=1;
		cin>>n;
		x=r[n-1];
		for(int i=n-2;i>=0;i--)
		{
			if(r[i]==x)
			{
				count++;
			}
		}
		cout<<count<<"\n";
		
	}
	return 0;
}
