#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int digitsum(int a,int b)
{
    int n=a*b;
    int sum=0;
    while(n)
    {
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}
int main() {
	int t,n;
	int arr[10001];
	int sum;
	cin>>t;
	while(t--)
	{
	    sum=INT_MIN;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int k=digitsum(arr[i],arr[j]);
	            if(k>sum)
	           {
	                sum=k;
	           }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
