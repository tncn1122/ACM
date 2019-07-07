#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n, P[1000005];
bool notP[9000005] = {0};

//===========

void Prepare()
{
	notP[0] = 1;
	notP[1] = 1;
	for (ll i = 2; i*i <= 9000005; i++)
	{
		for (ll j = i*i; j <= 9000005; j+=i)
		{
			notP[j] = 1;
		}
	}
}

void Result()
{
	//code here
	Prepare();
	cin >> n;
	ll stt = 0;
	for (ll i = 2; i <= 9000005; i++)
	{
		if(!notP[i])
		{
			P[++stt] = i;
		}
		if (stt == n)
		{
			cout << P[stt];
			return;
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

