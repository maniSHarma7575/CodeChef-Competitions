#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	long long int q,x,even1,odd1,result,count;

	cin>>t;
	while(t--)
	{   multimap<long long int,long long int> track;
	    even1=0;
       
       
       
	    odd1=0;
	    vector<long long int> s ;
	    vector<long long int>::iterator it;
	    
	    cin>>q;
	    count=0;
	    while(q--)
	    {

	        cin>>x;
	        long long int temp=0;

	        if(track.find(x)==track.end())
	        {   count++;
	        
	            track.insert({x,1});


	           if(__builtin_popcount (x)%2==0)
	           {
	              
	               even1++;
	               
	           }
	           else
	           {
	                odd1++;
	           }
	          
	            s.push_back(x);
	           
	        
	        
	        
	        for(int i=0;i<count;i++)
	        {
	           

	            if(s[i]!=x)
	            {
	               
	            result=(s[i]^x);
	            


	            if(track.find(result)==track.end())
	           
	            {
	                track.insert({result,1});
	                if(__builtin_popcount (result)%2==0)
	           {
	               even1++;
	           }
	           else
	           {
	                odd1++;
	           }
	            s.push_back(result);
	            temp++;


	            }
	            }
	        }
	        }
	        count+=temp;
	        cout<<even1<<" "<<odd1<<endl;
	        }



	    }



	return 0;
}


