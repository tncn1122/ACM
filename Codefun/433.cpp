#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll arr[10005];
	ll n, p, q, r;
	cin >> n >> p >> q >> r;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cout << p*(p > 0 ? arr[n - 1] : arr[0]) + q*(q > 0 ? arr[n - 1] : arr[0]) + r*(r > 0 ? arr[n - 1] : arr[0]);
	return 0;
}
