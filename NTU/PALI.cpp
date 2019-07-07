#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n;
string a[1005];
//===========

bool check(string x)
{
	string tmp = x;
	reverse(tmp.begin(), tmp.end());
	return (x == tmp);
}

void Result()
{
	//code here
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (ll i = 0; i < n; i++)
	{
		if(check(a[i]))
		{
			cout << a[i] << " ";
		}
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

