#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool areEqual(unsigned long long int arr1[], unsigned long long int arr2[], int n) 
{ 
   
    unordered_map<int, int> mp; 
    for (int i = 1; i <=n; i++) 
        mp[arr1[i]]++; 
  
   
    for (int i = 1; i <=n; i++) { 
       
        if (mp.find(arr2[i]) == mp.end()) 
            return false; 
 
        if (mp[arr2[i]] == 0) 
            return false; 
  
        mp[arr2[i]]--; 
    } 
  
    return true; 
} 
void add(unsigned long long int arr[], int N,long long int lo,long long int hi, int val) 
{ 
    arr[lo] += val; 
    if (hi != N) 
       arr[hi + 1] -= val; 
} 

void updateArray(unsigned long long int arr[], int N) 
{ 
    for (int i = 2; i <= N; i++) 
        arr[i] += arr[i - 1]; 
} 

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int n;
    unsigned long long int a;
    long long int low;
    long long int high;
    unsigned long long int brr[100002];
    bool flag=false;
    cin>>t;
    while(t--)
    {
        flag=false;
        unsigned long long int arr[100002]={0};
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            low=i-a;
            high=i+a;
            if(low<=0)
            {
                low=1;
            }
            if(high>n)
            {
                high=n;
            }
            add(arr,n,low,high,1);
        }
        updateArray(arr,n);
        for(int i=1;i<=n;i++)
        {
            cin>>brr[i];
        }
       
       if(areEqual(arr,brr,n))
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
