#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, x, a[100005]={0}, b[100005]={0};
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	// code here
	cin >> n >> m;
	for (ll i = 0; i < m; ++i)
	{
		cin >> x;
		a[x]++;
		b[a[x]]++;
		if (b[a[x]] == n)
			cout << 1;
		else
			cout << 0;
	}
	
	return 0;
}
