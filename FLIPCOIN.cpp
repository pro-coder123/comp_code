#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int flips, heads;
	Node()
	{
		flips = heads = 0;
	}
}
Node tree[400000], lazy[400000];
void update(int node, int s, int e, int A, int B)
{
	if(A > e || B < s)	
		return;
	
	if(lazy[node])
	{
		
		tree[node].flips +=
		if(s!=e)
		{
		}
	}
}

int main()
{
	int n,q;
	cin>>n>>q;
	while(q--)
	{
		int type, A, B;
		cin>>type>>A>>B;

	}

}
