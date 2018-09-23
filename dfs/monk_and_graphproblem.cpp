//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/monk-and-graph-problem/
#include <bits/stdc++.h>

using namespace std;

int c;

void dfs(vector <int>v[],bool vi[],int sn)
{
    vi[sn]=1;
    for(int i=0;i<v[sn].size();i++) 
      {
           ++c;
           if(vi[v[sn][i]]==0)
             {
                 dfs(v,vi,v[sn][i]);
             }
      }
}
int main()
{   int n,m,x,y,i;
    cin>>n>>m;
    vector < int >v[n+1];
    while(m--)
      {
          cin>>x>>y;
          v[x].push_back(y);
          v[y].push_back(x);
      }
    bool vi[n+1];
    memset(vi,0,sizeof(vi));
    int max1=INT_MIN;
    for(i=1;i<=n;i++)
      {
           if(vi[i]==0)
             {
                c=0;
                dfs(v,vi,i);
                max1=max(max1,c/2);
             }
      }
    cout<<max1<<'\n';  
    return 0;
}
