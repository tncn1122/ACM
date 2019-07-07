#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	getline(cin,s);
	ll pos; cin >> pos;
	for(ll i = 0; i < s.length() - 1; i++)
		{
			if (s[i] == ' ')
				pos--;
			if (pos == 1)
				cout << s[i];
		}
	return 0;
}
