#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	getline(cin,s);
	bool low = 0, up = 0, num = 0, invl = 0;
	for(ll i = 0; i < s.length(); i++)
	{
		if (islower(s[i]))
			low = true;
		if (isupper(s[i]))
			up = true;
		if (s[i] >= 48 && s[i] <= 57)
			num = true;
		if(s[i] < 48 || (s[i] > 57 && s[i] < 65) || (s[i] > 90 && s[i] < 97) || s[i] > 122)
			invl = true;
	}
	if (invl || s.length() < 4)
		cout << "Invalid";
	else if ( low && up && num && s.length() >= 8)
		cout << "Strong";
	else
		cout << "Weak";
	return 0;
}
