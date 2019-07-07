#include <bits/stdc++.h>
using namespace std;
typedef double ll;
int main()
{
	ll n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++)
	{
		n = n * (1 + m/100);
	}
	if (n = (long long) n)
		cout << (long long) n;
	else
		cout << (long long)n + 1;
	return 0;
}
