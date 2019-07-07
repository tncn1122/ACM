#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	ll word = 0, sent = 0;
	getline(cin,s);
	for(ll i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
				word++;
			if (s[i] == '.')
				sent++;
		}
	cout << word + 1 << " " << sent + 1;
	return 0;
}
