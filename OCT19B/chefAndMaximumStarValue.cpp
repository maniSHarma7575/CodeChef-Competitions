#include <bits/stdc++.h>
using namespace std;
typedef std::unordered_map<int, int> M;

bool value_comparer(M::value_type &i1, M::value_type &i2)
{
return i1.second<i2.second;
}



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--) {
		int N,i,j,k,ans=0;
		unordered_map < int, int > mapp,result;
		cin>>N;
		int A[N];
		for(i=0;i<N;i++)cin>>A[i];
		mapp[A[N-1]]=1;
		
		for(i=N-2;i>=0;i--){
			k=0;
			for(j=1;j<=sqrt(A[i]);j++) if(A[i]%j == 0) {
				if(mapp.find(j)!=mapp.end())
				{
					result[j]++;
					
				
				}
				if(j!=(A[i]/j) && mapp.find(A[i]/j)!=mapp.end())
				{
					result[A[i]/j]++;
				
				}
					
			}
			if(mapp.find(A[i])!=mapp.end()) mapp[A[i]]++;
			else mapp[A[i]]=1;
		}
		M::iterator itor = std::max_element(result.begin(), result.end(),
		value_comparer);
		if(itor==result.end())
		{
		    cout<<0<<endl;
		}
		else
		{
		cout<<itor->second<<endl;
		}
	}
	return 0;
}
