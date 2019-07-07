#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, arr[105][105];
	cin >> n;
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < n; j++)
			cin >> arr[i][j];
	
	ll c1 = n - 1, c2 = 0, sum = 0;
	for (ll i = 0; i < n; i++)
	{
		if (c1 == c2)
			sum -= arr[i][c1];
		sum += arr[i][c1--] + arr[i][c2++];
	}
	cout << sum;
	return 0;
}
