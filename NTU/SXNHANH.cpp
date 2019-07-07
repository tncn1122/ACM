#include <bits/stdc++.h>
using namespace std;

#define  Infile				freopen("input.txt", "r", stdin)
#define  Outfile			freopen("output.txt", "w", stdout)
#define  ms(a, u)			memset(a, u, sizeof(a))
#define  pb(x)				push_back(x)
#define  endl				'\n'

typedef unsigned long long ull;
typedef long long ll;
typedef double db;

db const EPS  = DBL_EPSILON;
ll const INF  = LLONG_MAX;


//declare here
ll n, arr[50], pos;

//===========

void Result()
{
	//code here
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	pos = 0;
	for (ll i = 0; i < n-1; i++)
	{
		if (arr[i] <= arr[n-1])
		{
			swap(arr[i], arr[pos++]);
		}
	}
	swap(arr[n-1], arr[pos]);
	for (ll i = 0; i < n; i++)
	{
		if (i != pos)
		{
			cout << arr[i] << " ";
		}
		else
		{
			cout << "[" << arr[i] << "]" << " ";
		}
	}
}

	

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	#ifdef RIMURU
//		Infile;
//		Outfile;
	#endif
	Result();
	
	return 0;
}
