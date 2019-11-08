#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long ncr(int n,int r)
{
	long long p=1,k=1;
	if(n-r<r)
	{
		r=n-r;
	}
	if(r!=0)
	{
		while(r)
		{
			p*=n;
			k*=r;
			long long m=__gcd(p,k);
			p/=m;
			k/=m;
			
			n--;
			r--;
			
		}
	}
	else
	{
		p=1;
	}
	return p;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long n,a[10001]={0},b[10001],k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			a[b[i]]++;
		}
		int last;
		for(int i=0;i<101;i++)
		{
			if(a[i]!=0)
			{
				k=k-a[i];
				if(k<=0)
				{
					last=a[i];
					k=k+a[i];
					break;
				}
			}
		}
		cout<<ncr(last,k)<<endl;
		
	}
	return 0;
}
