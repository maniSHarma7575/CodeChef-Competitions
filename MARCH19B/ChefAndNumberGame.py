#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    long long int a;
    int cneg=0,cpos=0;
    cin>>t;
    while(t--)
    {
        cneg=0;
        cpos=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<0)
            {
                cneg++;
            }
            else
            {
                cpos++;
            }
        }
        if(cneg!=0&&cpos!=0)
        {
            if(cneg>=cpos)
            {
                cout<<cneg<<" "<<cpos;
            }
            else
            {
                cout<<cpos<<" "<<cneg;
            }
        }
        else
        {
            if(cpos!=0)
            {
                cout<<cpos<<" "<<cpos;
            }
            else
            {
                cout<<cneg<<" "<<cneg;
            }
        }
        cout<<endl;
    }
}
