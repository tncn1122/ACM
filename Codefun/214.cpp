#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a, b, c ,d ,e;
	cin >> a >> b >> c >> d >> e;
	ll gcd = __gcd(a,b);
	ll lcm = a*b/gcd;
	gcd = __gcd(lcm ,c);
		lcm  = lcm *c/gcd;
	gcd = __gcd(lcm ,d);
		lcm  = lcm*d/gcd;
	gcd = __gcd(lcm ,e);
		lcm  = lcm*e/gcd;
	cout << lcm;
	return 0;
}
