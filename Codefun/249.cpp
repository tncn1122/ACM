#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, sol = 0, city = 0;
	ll arr[1005];
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (ll i = 0; i < n; i++)
	{
		sol += arr[i];
		city++;
		if (sol < 0)
		{
			cout << "DEFEATED AT CITY " << city;
			return 0;
		}
	}
	cout << "VICTORY";
	return 0;
}
