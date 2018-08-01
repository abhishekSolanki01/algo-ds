//question is that is it possible to paritition a array such that it have equal sum;
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	  {
	      long int n,i,j;
	      cin>>n;
	      long int a[n];
	      long long int sum=0;
	      for(i=0;i<n;i++)
	       { cin>>a[i];sum+=a[i];}
	       if(sum%2==1)
	         cout<<0<<'\n';
	       else
	         {
	         	sum/=2;
	         	bool dp[n][sum+1];
	         	for(i=0;i<n;i++)
	         	 {
	         	 	for(j=0;j<sum+1;j++)
	         	 	  {
	         	 	  	dp[i][j]=0;
	         	 	  }
	         	 }
	           dp[0][a[0]]=1;
	           for(i=1;i<n;i++)
	             { 
	               dp[i][a[i]]=1;
	               for(j=0;j<sum+1;j++)
	                 {
	                 	if(dp[i-1][j]==1)
	                 	  {
	                 	  	dp[i][j]=1;
	                 	  	if(j+a[i]<sum+1)
	                 	  	  dp[i][j+a[i]]=1;
	                 	  }
	                 }
	             }
	         
	         	cout<<dp[n-1][sum]<<'\n';
	         }
	         
	  }
	return 0;
}
