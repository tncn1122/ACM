#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll n;
ll arr[11];
//===========

bool check1()
{
	bool res = true;
	ll old = arr[0];
	for (ll i = 1; i < 10; i++)
	{
		if (arr[i] <= old)
		{
			old = arr[i];
		}
		else
		{
			res = false;
			break;
		}
	}
	return res;
}

bool check2()
{
	bool res = true;
	ll old = arr[0];
	for (ll i = 1; i < 10; i++)
	{
		if (arr[i] >= old)
		{
			old = arr[i];
		}
		else
		{
			res = false;
			break;
		}
	}
	return res;
}

void Result()
{
	//code here
	cin >> n;
	cout << "Lumberjacks:" << endl;
	while(n--)
	{
		for (ll i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}
		if (check1() || check2())
		{
			cout << "Ordered" << endl;
		}
		else
		{
			cout << "Unordered" << endl;
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

