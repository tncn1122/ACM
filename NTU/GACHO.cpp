#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n, m, c, d;
bool check = 1;
//===========


void Result()
{
	//code here
	cin >> n >> m;
	if ((m-2*n)%2 != 0 || m < 2*n)
	{
		check = 0;
	}
	d = (m-2*n)/2;
	if (d > n)
	{
		check = 0;
	}
	c = n-d;
	if (check)
	{
		cout << c << " " << d;
	}
	else
		cout << -1;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Result();
	
	return 0;
}

