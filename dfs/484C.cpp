#include <bits/stdc++.h>

using namespace std;

void dfs(vector <long >v[],bool vi[],long sub[],long int sn)
{
   vi[sn]=1;
   sub[sn]=1;
   for(long i=0;i<v[sn].size();i++)
     {
     	if(vi[v[sn][i]]==0)
     	  {  
     	  	  dfs(v,vi,sub,v[sn][i]);
     	  	  sub[sn]+=sub[v[sn][i]];
     	  }
     		
     }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	long int n,i,x,y;
	cin>>n;
	if(n%2==1)
	  {
	  	 cout<<-1<<'\n';
	  	 return 0;
	  }
	else
	  {
	  	  vector <long >v[n+1];
	  	  for(i=1;i<n;i++)
	  	     {
	  	     	 cin>>x>>y;
	  	     	 v[x].push_back(y);
	  	     	 v[y].push_back(x);
	  	     }
	  	 bool  vi[n+1];
	  	 long sub[n+1];
	  	 memset(vi,0,sizeof(vi));
	  	 memset(sub,0,sizeof(sub));
	  	 dfs(v,vi,sub,1);
	  	 long ans=0;
	  	 for(i=2;i<=n;i++)
	  	   ans+=(1-sub[i]%2);
	  	   cout<<ans<<'\n';
	  }
	return 0;
}
