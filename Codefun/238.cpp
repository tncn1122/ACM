#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, bill, money[105];
	cin >> n >> bill;
	for (ll i = 0; i < n; i++)
	{
		cin >> money[i];
	}
	for (ll i = 0; i < n; i++)
	{
		cout << bill / money[i] << endl;
		bill = bill % money[i];
	}
	return 0;
}
