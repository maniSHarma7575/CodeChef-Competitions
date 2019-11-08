
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[60];
int c[60];

unsigned int Log2(unsigned long long int N)
{
    unsigned int n = 0;
    while (N >>= 1)
    {
        ++n;
    }
    return n;
}
void fibo()
{
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=59;i++)
    {
        arr[i]=(arr[i-1]+arr[i-2])%10;
    }
    c[0]=1;
    int k=1;
    int temp[]={2,4,8,6};
    while(k<=59)
    {
        for(int i=0;i<4;i++)
        {
            c[k]=temp[i];
            k++;
        }
    }
    
}
int gen(int x)
{
    switch(x)
    {
        case 2:
        return 32;
        case 4:
        return 4;
        case 8:
        return 8;
        case 6:
        return 16;
    }
}
int index(int x)
{
    
    if(x==1)
    {
        return 2;
    }
    else
    {
        return gen(c[x]);
    }
}

int main() {
	fibo();
	unsigned long long int t,n,res;
	int x;
	cin>>t;
	while(t--)
	{
	scanf("%llu",&n);
	
	x=(int)Log2(n);
	
	res=index(x);
   

	cout<<arr[res-1]<<endl;
	
	
	}
	
	return 0;
}
