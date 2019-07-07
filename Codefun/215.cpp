#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, d;
	cin >> n >> d;
	ll prev = 0, count = 0, pos;
	for(ll i = 0; i < n; i++)
	{
		cin >> pos;
		if (pos >= prev + d)
		{
		prev = pos;
		count++;
		}
	}
	cout << count;
	return 0;
}
