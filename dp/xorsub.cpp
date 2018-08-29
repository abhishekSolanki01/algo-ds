/*https://www.codechef.com/problems/XORSUB*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	bool dp[1001][1025];
	for(int i=0;i<1001;i++)
	  {
	  	 for(int j=0;j<1025;j++)
	  	        dp[i][j]=0;
	  }
	int n,k,i,j;
	cin>>n>>k;
	//cout<<n<<k;
	int a[n+1];
	//cout<<n+1;
	for(i=1;i<(n+1);i++)
	   {
	   	cin>>a[i];
	   	
	   }
	dp[0][0]=1;
	for(i=1;i<1001 && i<(n+1);i++)
	  {
	  	 for(j=0;j<1025;j++)
	  	    {
	  	    	if(dp[i-1][j]==1)
	  	    	  {	//cout<<j<<" ";
	  	    	  	  dp[i][j]=1;
	  	    	  	  dp[i][(j^a[i])]=1;
	  	    	  }
	  	    }
	  }
	int max1=0;  
	for(i=0;i<1025;i++)
	  {
	  	  if(dp[n][i]==1)
	  	    {
	  	    	 max1=max(max1,i^k);
	  	    }
	  }
	 cout<<max1<<"\n"; 
	}
	return 0;
}
