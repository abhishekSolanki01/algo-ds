#include <iostream>
using namespace std;



long long int solve(long long n,long long int x)
{
	if(x==9)
	  {
	  	return n/9;
	  }
	else
	  {
	  	  if(x<=n%9)
	  	    {
	  	    	return n/9+1;
	  	    }
	  	  else
	  	    return n/9;
	  }
	  
}

int main() {
   int t;
   long long  n,m,x;
   cin>>t;
   while(t--)
     {
     	 cin>>n>>m>>x;
     	 //cout<<solve(m,x)<<'\n';
     	 cout<<solve(m,x)-solve(n-1,x)<<'\n';
          	 
     }
	// your code goes here
	return 0;
}
