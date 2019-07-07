#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, arr[1005];
	cin >> n;
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	ll f = arr[0], max = 1, length = 1;
	for(ll i = 1; i < n; i++)
	{
		if (f * arr[i] < 0)
		{
		length++;
		f = arr[i];
		}
		else
		{
			if (length > max)
			max = length;
			length = 1;
			f = arr[i];
		}
	}
	if (length > max)
			max = length;
	cout << max;
	return 0;
}
