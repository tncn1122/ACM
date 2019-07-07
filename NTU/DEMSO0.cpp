#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n, five = 0, two = 0;
//===========


void Result()
{
	//code here
	cin >> n;
	for (ll i = 1; i <= n; i++)
	{
		ll tmp = i;
		if (tmp%5 == 0)
		{
			while(tmp%5 == 0)
			{
				five++;
				tmp /= 5;
			}
		}
		if (tmp%2 == 0)
		{
			while(tmp%2 == 0)
			{
				two++;
				tmp /= 2;
			}
		}
	}
	cout << min(five, two);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Result();
	
	return 0;
}

