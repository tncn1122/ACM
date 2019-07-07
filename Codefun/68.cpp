#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, ans = 1, x = 1; cin >> n;
	for (ll i = 1; i <= n; i++)
	{
		x *= i;
	
	}
	cout << x << endl;
	cout << ans;
	return 0;
}
