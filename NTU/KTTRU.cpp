#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
string s;
//===========


void Result()
{
	//code here
	cin >> s;
	ll q, a, b, len = s.length();
	cin >> q;
	while(q--)
	{
		cin >> a >> b;
		if (s[(a-1)%len] == s[(b-1)%len])
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Result();
	
	return 0;
}

