//dfs using stack
#include <bits/stdc++.h>
using namespace std;


void dfs(vector <long int>v[],int vi[],long int sn)
{
	stack <long int >s;
	s.push(sn);
	vi[sn]=1;
	while(s.size()>0)
	  {  long int i,x;
	  	 x=s.top();
	  	 s.pop();
	  	 for(i=0;i<v[x].size();i++)
	  	   {
	  	   	  if(vi[v[x][i]]==0)
	  	   	    {
	  	   	    	vi[v[x][i]]=1;
	  	   	    	s.push(v[x][i]);
	  	   	    }
	  	   }
	  }
}


int main() {
	int n,m;
	cin>>n>>m;
	vector <long int >v[n+1];
	while(m--)
	  {
	  	cin>>x>>y;
	  	v[x].push_back(y);
	  	v[y].push_back(x);
	  }
	int vi[n+1];
	for(i=1;i<=n;i++)
	  vi[i]=0;
	dfs(v,vi,1);  
	return 0;
}
