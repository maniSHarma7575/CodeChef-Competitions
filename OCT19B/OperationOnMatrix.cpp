#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	long long n,m,q,x,y;
	map<long,long> row,col;
	while(t--){
		
		cin>>n>>m>>q;
		
		while(q--){
			cin>>x>>y;
			row[x-1]++;
			col[y-1]++;
		}
		long long re=0,ro=0,ce=0,co=0;
		for(int i=0;i<n;i++)
			if((row[i]&1) == 0)
				re++;
			else
				ro++;
		for(int i=0;i<m;i++)
			if((col[i]&1) == 0)
				ce++;
			else
				co++;
		long long ans = re*co + ro*ce;
		cout<<ans<<endl;
		row.clear();
		col.clear();
	}
	return 0;
}
