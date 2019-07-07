#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s; cin >> s;
	ll a, b; cin >> a >> b;
	if (a > b)
	swap(a,b);
	s.erase(a - 1,b - a + 1);
	cout << s;
	return 0;
}
