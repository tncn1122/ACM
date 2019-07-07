#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	cin >> s;
	ll lgth = 0;
	vector <ll> ans;
	for(ll i = 0; i < s.length(); i++)
	{
		if (s[i] == 'L')
		{
			ans.push_back(lgth);
			lgth = 0;
		}
		else
			lgth++;
	}
	ans.push_back(lgth);
	sort(ans.begin(),ans.end());
	if (ans.size() == 1)
		cout << ans[ans.size()-1];
	else
	cout << ans[ans.size()-1] + ans[ans.size()-2];
	return 0;
}
