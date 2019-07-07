#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k, x[105], e = 0, s = 0, ans = 0;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	cin >> n >> k;
	for (ll i = 0; i < n; ++i)
	{
		cin >> x[i];
		if (x[i] < 0)
			s++;
		else
			e++;
	}
	for (ll i = 0; i < k; ++i)
	{
		ll j = i, ex = e, sx = s;
		while (j < n)
		{
			if (x[j] < 0)
				sx--;
			else
				ex--;
			j += k;
		}
		ans = max(ans, abs(ex-sx));
	}
	cout << ans;
	
	
	return 0;
}
