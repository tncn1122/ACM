#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
string s;
ll alp[125] = {0};
ll pos[125];
ll ans = 0, tmp = 0;
//===========


void Result()
{
	//code here
	cin >> s;
	for (ll i = 0; i < s.length(); i++)
	{
		char x = s[i];
		if (alp[s[i]] == 0)
		{
			tmp++;
			alp[s[i]]++;
			pos[s[i]] = i;
			ans = max(ans, tmp);
		}
		else
		{
			ans = max(ans, tmp);
			memset(alp, 0, sizeof(alp));
			tmp = 0;
			i = pos[s[i]];
		}
	}
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Result();
	
	return 0;
}

