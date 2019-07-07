#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, arr[1005], sum = 0;
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (ll i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			break;
		sum += arr[i];
	}
	cout << sum;
	return 0;
}
