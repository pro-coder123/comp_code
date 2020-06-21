#include <bits/stdc++.h>
using namespace std;
int ncr(int n, int k)
{
	float i,p =1;
	for(i=k ; i>=1 ; i--)
	{
		p = p * (n/i);
		n--;
	}
	return p;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<int(ncr(n-1,k-1))<<'\n';
	}
}


