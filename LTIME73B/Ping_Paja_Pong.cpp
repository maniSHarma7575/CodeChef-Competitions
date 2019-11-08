#include <iostream>
using namespace std;

int main() {
    long long int t,x,y,k;
    cin>>t;
    int result=1;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>k;
        if(((int)(x+y)/k)%2==0)
        {
            cout<<"Chef";
        }
        else
        {
            cout<<"Paja";
        }
        cout<<endl;
        
        
    }
	return 0;
}
