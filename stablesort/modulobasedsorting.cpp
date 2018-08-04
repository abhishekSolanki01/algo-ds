#include <bits/stdc++.h>
using namespace std;

long int k;

bool  cmp(const long int &a,const long int &b)
{
	return a%k < b%k;
}

int main() {
	long int n,i;
	cin>>n>>k;
	long int a[n];
	for(i=0;i<n;i++)
	  cin>>a[i];
	stable_sort(a,a+n,cmp);
	for(i=0;i<n;i++)
	  cout<<a[i]<<" ";
	return 0;
}
