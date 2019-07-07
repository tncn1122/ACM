#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long toHop(int k, int n)
{
   long long c=1;
   for (int i=1;i<=k;i++,n--)
      c=c*n/i;
   return c;
}
int main()
{
	ll n, k;
	cin >> n >> k;
	cout<<toHop(k,n);
	return 0;
}
