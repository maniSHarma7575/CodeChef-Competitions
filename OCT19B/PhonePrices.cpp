#include <iostream>
using namespace std;

int main() {
    int n;
    int t;
    cin>>t;
    bool flag;
    int count;
    int arr[101];
    int c;
    int j;
    while(t--)
    {
        c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        flag=true;
        count=5;
        for(int i=0;i<n;i++)
        {
            j=i-1;
            while(j>=0 && count && arr[j]>arr[i])
            {
                count--;
                j--;
            }
            if(j==-1 || count==0)
            {
                c++;
            }
            count=5;
            
        }
        cout<<c<<endl;
    }
	return 0;
}
