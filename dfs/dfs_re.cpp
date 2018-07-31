#include <bits/stdc++.h>
using namespace std;

void dfs(vector <long int >v[],int vi[],long int sn)
{
	vi[sn]=1;
	for(long int i=0;i<v[sn].size();i++)
	  {
	  	 if(vi[v[sn][i]]==0)
	  	   {
	  	   	  dfs(v,vi,v[sn][i]);
	  	   }
	  }
}


int main() {
    int n,m,x,y,i;
    cin>>n>>m;
    vector <long int >v[n+1];
    while(m--)
      {
      	  cin>>x>>y;
      	  v[x].push_back(y);
      	  v[y].push_back(x);
      }
     int visted[n+1]; 
    for(i=0;i<=n;i++)
      {
      	visted[i]=0;
      }
     long int sn; 
      cin>>sn;
    dfs(v,visted,sn);
	return 0;
}
