#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, qr; string a, b;
	cin >> a >> b >> n;
	for (ll i = 0; i < n; i++)
		{
			cin >> qr;
			if (a[qr-1] == b[qr-1])
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	return 0;
}
