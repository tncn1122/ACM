#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n;
pair <ll, ll> arr[100005];
ll ans = 0;
//===========


void Result()
{
	//code here
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr+n);
	ll f = arr[0].first, l = arr[0].second;
	for (ll i = 0 ; i < n; i++)
	{
		if (arr[i].first <= l)
		{
			l = max(arr[i].second, l);
		}
		else
		{
			ans += l-f;
			f = arr[i].first;
			l = arr[i].second;
		}
	}
	ans += l-f;
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

