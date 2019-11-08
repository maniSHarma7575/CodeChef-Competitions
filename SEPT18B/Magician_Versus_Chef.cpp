#include<iostream>
using namespace std;
int main()
{
long long int t,a,b;
cin>>t;
while(t--)
{
long long int n,x,s;
cin>>n>>x>>s;
for(int i=0;i<s;i++)
{
cin>>a>>b;
if((a==x && a<=n) || (b==x && b<=n))
{
if(a==x)
{
x=b;
}
else if(b==x)
{
x=a;
}
}
}
cout<<x<<endl;
}
}
