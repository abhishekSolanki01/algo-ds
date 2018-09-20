imp test case 
/*4
0110
0011
0001
1000
 */


#include <bits/stdc++.h>
using namespace std;

bool v1[5001][5001];
vector <int> a;
int n;
int pa[5001];
void dfs(vector <int >v[],int vi[],int sn)
{
	vi[sn]=1;
	for(int i=0;i<v[sn].size();i++)
	 {
		
		if(vi[v[sn][i]]==0)
	 	  {	
	 	  	 pa[v[sn][i]]=sn;
	 	  	 	
	 	  	 dfs(v,vi,v[sn][i]);
	 	  }
	 	else if(vi[v[sn][i]]==1)
	 	  {  pa[v[sn][i]]=sn;
	 	    
	 	  }  
	 	if(pa[pa[sn]]==v[sn][i]){
	 			a.push_back(v[sn][i]);a.push_back(pa[sn]);a.push_back(sn);}
	 }
	vi[sn] = 2;	 
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int i,j;
	cin>>n;
	string s;
	memset(pa,-1,sizeof(pa));
	memset(v1,0,sizeof(v1));
	vector <int > v[n+1];
	for(i=1;i<=n;i++)
	  {         cin>>s;
	  	 for(j=0;j<n;j++)
	  	   v1[i][j+1]=s[j]-'0';
	  	   
	  }
	for(i=1;i<=n;i++)
	  {     
	       for(j=1;j<=n;j++)
	          {
	          	if(v1[i][j]==1)
	          	  v[i].push_back(j);
	          }
	  }
	  //cout<<v[2].size()<<" ";
	int  vi[n+1];
	memset(vi,0,sizeof(vi));
	for(i=1;i<=n;i++)
	   {
	   	   if(vi[i]==0)
	   	     {
	   	       dfs(v,vi,i);
                              
	   	     }
	   }
	 if(a.size()==0)
	   cout<<-1;
	 else
	   {
	   	  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<'\n';
	   }
	// your code goes here
	return 0;
}
