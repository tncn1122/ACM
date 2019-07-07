#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, prev, next, max = 0;
	cin >> n;
	cin >> prev;
	for(ll i = 1; i < n; i++)
	{
		cin >> next;
		if (max < abs(next - prev))
			max = abs(next - prev);
		prev = next;
	}
	cout << max;
	return 0;
}
