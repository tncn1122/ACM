#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s; cin >> s;
	ll a, b; cin >> a >> b;
	for(ll i = a - 1; i < b; i++)
	{
		if(isupper(s[i]))
			s[i] = tolower(s[i]);
		else
			s[i] = toupper(s[i]);
	}
	cout << s;
	return 0;
}
