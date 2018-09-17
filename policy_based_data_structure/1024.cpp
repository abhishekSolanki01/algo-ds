#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

//tree<pair <long long int ,int>,null_type,less <pair <long long int ,int > >,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<pair<long long,int>, null_type, less<pair<long long,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ordered_set m;
    int n,i,x;
    long long int m1;
    cin>>n>>m1;
    int a[n];
    long long pre[n+1];
    pre[0]=0;
    for(i=0;i<n;i++)
      {
           cin>>a[i];
           pre[i+1]=a[i]+pre[i];
      }
     long long int ans=0;
     //ordered_set m;
     m.insert({pre[0],0});
     for(i=1;i<n+1;i++)
       {
           x=m.order_of_key({pre[i]-m1,1e9});
           ans+=(m.size()-x);
           m.insert({pre[i],i});
       }
     cout<<ans<<'\n';  
    
    return 0;
}
