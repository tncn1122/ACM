#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, k;
	cin >> n >> k;
	if (!n & 1)
		n--;
	if (k <= (n+1)/2)
		cout << k*2 - 1;
	else
		cout << (k-(n+1)/2) * 2;
	return 0;
}
