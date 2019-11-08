#include <iostream>
using namespace std;

int main() {
	int t;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    int len=s.length();
	    bool r=s[len-1]=='0'?false:true;
	    for(int i=len-2;i>=0;i--)
	    {
	        if(s[i]=='1')
	        {
	            if(r==true)
	            {
	                r=false;
	            }
	            else
	            {
	                r=true;
	            }
	        }
	    }
	    if(r==true)
	    {
	        cout<<"WIN";
	    }
	    else
	    {
	        cout<<"LOSE";
	    }
	    cout<<endl;
	}
	return 0;
}
