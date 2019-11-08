#include<iostream>
#include<vector>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int t,a,b;
   cin>>t;
   int start,end;
   while(t--)
   {
   long long  n;
   long long k,x;
   cin>>n>>k;
   vector<long long > v;
   long long  a;
   for(long long  i=0;i<n;i++)
   {  cin>>a;
     v.push_back(a);
       
   }
   k=k-1;
   if(n%2==0)
   {
       k=k%(n*3);
   }
   else
   {
       x=n/2;
       if(k>=0 && k<=x-1)
       {
           
       }
       else
       {
           k=k%(n*3);
           if(k>=0 && k<=x-1)
           {
               k=(n*3)+k;
           }
           
       }
       
   }
   for(int i=0;i<=k;i++)
   {
       start=i%n;
       end=n-(i%n)-1;
       a=v[start];
       b=v[end];
       v[start]=a^b;
   }
   for(auto it:v)
   {
       cout<<it<<" ";
   }
   cout<<endl;
   
   
   }


}
