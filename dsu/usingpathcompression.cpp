//dsu using path compression to find the path compression to find the no. of connected compenents 
#include <bits/stdc++.h>
using namespace std;

long int parent[1000001];

void make_set(long int i)
{
	parent[i]=i;
}

long int find_set(long int a)
{
	if(parent[a]==a)
	   return a;
	 return parent[a]=find_set(parent[a]); //THIS IS STEP PATH COMPREESION TAKE PLACE IT REDUCE THE COMPLEXCITY BY LOG(N) ON AVERAGE  
}

void union_set(long int a,long int b)
{
	a = find_set(a);
	b = find_set(b);
	if(a!=b)
	  parent[b]=a;
}

int main() {
	long int n,m,i,x,y;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	  make_set(i);
	while(m--)
	  {
	  	  cin>>x>>y;
	  	  union_set(x,y);
	  }
	long int count=0;  
	for(i=1;i<=n;i++)
	  {
	  	 if(find_set(i)==i)
	  	   {
	  	   	 ++count;
	  	   }
	  }
	 cout<<count<<'\n'; 
	return 0;
}
