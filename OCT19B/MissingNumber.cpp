#include <iostream>
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace std;
using namespace boost::multiprecision;
int val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
} 
int256_t  toDeci(string str, int base) 
{ 
    int len = str.length(); 
    int256_t power = 1; 
    int256_t num = 0;  
    int i; 
  
 
    for (i = len - 1; i >= 0; i--) 
    { 
        
        if (val(str[i]) >= base) 
        { 
           
           return -1; 
        } 
  
        num += val(str[i]) * power; 
        power = power * base; 
    } 
  
    return num; 
} 

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,t,b;
    string y;
    cin>>t;
    int256_t result;
    while(t--)
    {vector<int256_t> v;
        result=16;
        cin>>n;
        int z=n;
        while(n--)
        {
        	set<int256_t> s;
            cin>>b>>y;
           if(b==-1)
           {
           		for(int i=2;i<=36;i++)
           		{
           		    result=toDeci(y,i);
           		    if(result!=-1)
           		    {
           			s.insert(result);
           		    }
           		}
           }
           else
           {
           	result=toDeci(y,b);
           		    if(result!=-1)
           		    {
           			s.insert(result);
           		    }
           }
           copy(s.begin(),s.end(),back_inserter(v));
        }
        sort(v.begin(),v.end());
      
        int l=v.size();
        int c=0;
        int256_t u=1000000000000;
        bool flag=false;
        int i;
        for(i=0;i<l-1;i++)
        {
        	if(v[i]==v[i+1])
        	{
        		c++;
        	}
        	else
        	{
        		if(c==z-1 && v[i]<=u)
        		{
        			cout<<(int1024_t)v[i]<<endl;
        			flag=true;
        			break;
        		}
        		else
        		{
        			c=0;
        		}
        	}
        }
        if(z==1)
        {
            if(b!=-1)
            {
                cout<<toDeci(y,b)<<endl;
            }
            continue;
        }
        if(flag==false && c==z-1 && v[i]<=u)
        		{
        			cout<<(int1024_t)v[i]<<endl;
        		    continue;
        		}
        
        if(flag==false)
        {
        	cout<<"-1"<<endl;
        }
        
        
    }
	return 0;
}
