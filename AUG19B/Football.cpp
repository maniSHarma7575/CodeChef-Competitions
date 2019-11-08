#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	int arr[151];
	int brr[151];
	int maxscore=INT_MIN;
	cin>>t;
	while(t--)
	{
	    maxscore=INT_MIN;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>brr[i];
	        int temp=20*arr[i]-10*brr[i];
	        if(temp<0)
	        {
	            temp=0;
	        }
	        if(temp>maxscore)
	        {
	            maxscore=temp;
	        }
	    }
	    cout<<maxscore<<endl;
	}
	return 0;
}
