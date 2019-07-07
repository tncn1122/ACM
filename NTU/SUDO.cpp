#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
ll arr[10][10] = {0};
bool ans = false;
//===========

bool check(ll row, ll col, ll num)
{
	for (ll i = 1; i <= 9; i++)
	{
		if (arr[row][i] == num || arr[i][col] == num)
			return false;
	}
	ll a = ((row-1)/3)*3+1;
	ll b = ((col-1)/3)*3+1;
	for (ll i = a; i < a+3; i++)
	{
		for (ll j = b; j < b+3; j++)
		{
			if (arr[i][j] == num)
			{
				return false;
			}
		}
	}
	return true;
}

void Try(ll row, ll col)
{
	if (!ans)
	{
		if (row > 9)
		{
			if (col == 9)
			{
				ans = true;
				for (ll i = 1; i <= 9; i++)
				{
					for (ll j = 1; j <= 9; j++)
					{
						cout << arr[i][j] << " ";
					}
					cout << endl;
				}
			}
			else
			{
				Try(1, col+1);
			}
		}
		else
		{
			if (arr[row][col] == 0)
			{
				for (ll num = 1; num <= 9; num++)
				{
					if (check(row, col, num))
					{
						arr[row][col] = num;
						Try(row+1, col);
						arr[row][col] = 0;
					}
				}
			}
			else
			{
				Try(row+1, col);
			}
		}
	}
}

void Result()
{
	//code here
	for (ll i = 1; i <= 9; i++)
	{
		for (ll j = 1; j <= 9; j++)
		{
			cin >> arr[i][j];
		}
	}
	Try(1, 1);
	if (!ans)
		cout << -1;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	#ifdef RIMURU
		Infile;
//		Outfile;
	#endif
	Result();
	
	return 0;
}

