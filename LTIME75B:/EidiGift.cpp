#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a;
	cin>>t;

	while(t--)
	{
			multimap<int,int> mp;
	multimap<int,int> cp;
	    for(int i=0;i<3;i++)
	    {
	        
	        cin>>a;
	        mp.insert(pair <int, int> (a, i));
	    }
	    for(int i=0;i<3;i++)
	    {
	        cin>>a;
	        cp.insert(pair <int, int> (a, i));
	    }
	
	bool flag=true;
	multimap<int, int>:: iterator itr=mp.begin();
		multimap<int, int>:: iterator itr1=cp.begin();
		while(itr!=mp.end())
		{
			if(itr->second!=itr1->second)
			{
				flag=false;
			}
			if(mp.count(itr->first)!=cp.count(itr1->first))
			{
				flag=false;
			}
			itr++;
			itr1++;
		//	cout<<itr->first<<" "<<itr->second<<" "<<itr1->first<<" "<<itr1->second<<endl;
		}
		if(flag==false)
		{
		cout<<"NOT FAIR";	
		}
		else
		{
			cout<<"FAIR";
		}
		cout<<endl;
	}
	
	return 0;
}
