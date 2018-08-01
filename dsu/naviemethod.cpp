#include <bits/stdc++.h>
using namespace std;

long int parent[1000001];

void make_set(long int i)
{
	  parent[i]=i;
}

long int find_set(long int i)
{
	if(parent[i]==i)
	  return i;
	return find_set(parent[i]);
	
}

void union_set(long int a,long int b)
{
	a=find_set(a);
	b=find_set(b);
	if(a!=b)
	  parent[b]=a;
}

int main() {
	long int n,m,i,x,y;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	  {
	  	  make_set(i);
	  }
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
	// your code goes here
	return 0;
}		
