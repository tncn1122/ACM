#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, arr[105][105];
	cin >> n;
	for (ll i = 1; i <= n; i++)
		for (ll j = 1; j <= n; j++)
			cin >> arr[i][j];
	
	ll sum = 0;
	for (ll i = 1; i <= n; i++)
		for (ll j = 1; j <= n; j++)
		{
			if ( i & 1 || j & 1)
				sum+=arr[i][j];
		}
			
	cout << sum;
	return 0;
}
