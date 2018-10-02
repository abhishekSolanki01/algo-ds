//longest icreasing sub sequence
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	  {
	  	  //cin>>t;
	  	  int n,i,j;
	  	  cin>>n;
	  	  int a[n];
	  	  for(i=0;i<n;i++)
	  	    cin>>a[i];
	  	 int dp[n];
	  	 dp[0]=1;
	  	 int max1=1;
	  	 for(i=0;i<n;i++)
	  	   {   dp[i]=1;
	  	       //int ma=a[i];
	  	   	   for(j=0;j<i;j++)
	  	   	     { if(a[i]>a[j]){
	  	   	        if(dp[j]+1>dp[i])  
	  	   	     	  {
	  	   	     	  	  dp[i]=dp[j]+1;
	  	   	     	  	  //ma=a[j];
	  	   	     	  }
	  	   	      }
	  	   	     }
	  	   	   max1=max(dp[i],max1);  
	  	   }
	  	 cout<<max1<<'\n';  
	  }
	// your code goes here
	return 0;
}
