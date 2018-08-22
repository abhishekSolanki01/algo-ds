/*problem statement :Suppose you have a circular necklace with n jewels, each with some value, vi
. You wish to
sell the jewels individually, but unfortunately, removing jewel i from the necklace breaks the
neighboring jewels, making them worthless (i.e., vi−1 = vi+1 = 0). Formulate a DP problem
to figure out the maximum revenue you can recieve from the circular necklace.
Note: Notice that something special happens to the necklace after you decide whether or not
to sell the first jewel. The resulting problem becomes a standard and simple DP formulation.*/

//jewel breaking 
#include <iostream>
using namespace std;

int main() {
	long int n,i;
	cin>>n;
	long int a[n];
	for(i=0;i<n;i++)
	  cin>>a[i];
	long int dp[n];
	dp[0]=a[0];
	dp[1]=max(dp[0],a[1]);
	for(i=2;i<n;i++)
	  {
	  	 dp[i]=max(dp[i-1],a[i]+dp[i-2]);
	  }
	cout<<dp[n-1]<<'\n';  
	return 0;
}
