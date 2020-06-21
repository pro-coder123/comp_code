#include <bits/stdc++.h>
using namespace std;
unordered_map<long,long> dp;
long val(long a)
{
	if(dp.find(a)!=dp.end())
		return dp[a];
	if(!a)
		return 0;
	if(a == 1)	
		return 1;
	if(a == 2)
		return 2;
	long A = max(a/2,val(a/2));
	long B = max(a/3,val(a/3));
	long C = max(a/4,val(a/4));
	dp[a]=max(a,A+B+C);
	return dp[a] ;
}
int main()
{
	long n;
	while(cin>>n)
		cout<<val(n)<<'\n';
	
	return 0;

}
