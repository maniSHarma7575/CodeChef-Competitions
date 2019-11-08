#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	unsigned long long int t;
	cin>>t;
	unsigned long long int n,index;
	unsigned long long int arr[100002],sum;
	  
	double avg;
	while(t--)
	{
	    multimap<unsigned long long int,unsigned long long int> mp;
	    sum=0;
	    cin>>n;
	    for(unsigned long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        mp.insert({ arr[i], i }); 
	        
	        sum+=arr[i];
	    }
	    
	    avg=(double)sum/n;
	    
	    if(avg-(int)avg>0)
	    {
	        cout<<"Impossible";
	    }
	    else
	    {
	        int ele=sum-(int)avg*(n-1);
	       
	        auto it=mp.find(ele);
	        if(it!=mp.end())
	        {
	            cout<<(it->second)+1;
	        }
	          else
	          {
	              cout<<"Impossible";
	              
	          }
	        
	        
	    }
	    cout<<endl;
	    
	}
	return 0;
}
