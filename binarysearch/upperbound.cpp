#include <bits/stdc++.h>

using namespace std;
long long int fun(int mid)
{
    return (mid*1ll*(mid+1))/2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,m,mid;
        cin>>n>>m;
        int l=0,r=n;
       if(fun(n)<=m)
       {
           cout<<0<<'\n';
           continue;
       }
        while(l<r)
        {
          mid = l+(r-l)/2;
         if(fun(mid)>m)
            {
                r=mid;
            }
           else
           {
               l=mid+1;
           }
        }
      cout<<n-(l-1)<<'\n'; 
    }
}

