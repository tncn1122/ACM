#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	cin >> s;
	ll ans = 0;
	for(ll i = 0; i < s.length(); i++)
		if (s[i] == 'n')
		ans++;
	cout << ans;
	return 0;
}
