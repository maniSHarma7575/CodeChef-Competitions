#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n,s0,s1,r0,r1;
    string s,r;
    while(t--)
    {
        s0=0;
        r0=0;
        s1=0;
        r1=0;
        cin>>n;
        cin>>s;
        cin>>r;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=r[i])
            {
               if(s[i]=='0')
               {
                   s0++;
               }
               if(s[i]=='1')
               {
                   s1++;
               }
               if(r[i]=='0')
               {
                   r0++;
               }
               if(r[i]=='1')
               {
                   r1++;
               }
            }
        }
        if(s0==r0 && r0==r1)
        {
        
            cout<<"YES";
        }
        else
        {
           
            cout<<"NO";
        }
        cout<<endl;
    }
    
	return 0;
}
