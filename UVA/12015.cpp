#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n;
struct name
{
	string ws;
	ll times;
};
name arr[10];
//===========

bool cmp(const struct name &a, const struct name &b)
{
	return a.times > b.times;
}

void Result()
{
	//code here
	cin >> n;
	for (ll stt = 1; stt <= n; stt++)
	{
		ll old = -1;
		for (ll i = 0; i < 10; i++)
		{
			cin >> arr[i].ws >> arr[i].times;
			old = max(old, arr[i].times);
		}
		
	
		cout << "Case #" << stt << ":" << endl;
		for (ll i = 0; i < 10; i++)
		{
			if (arr[i].times == old)
			{
				cout << arr[i].ws << endl;
			}
		}
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	#ifdef RIMURU
		Infile;
		//Outfile;
	#endif
	Result();
	
	return 0;
}

