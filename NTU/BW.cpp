#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
struct node
{
	ll pos;
	char color;
};
vector <node> vec;
ll n, x, ans = 0;
//===========

bool cmp(node a, node b)
{
	return a.pos <= b.pos;
}

void Result()
{
	//code here
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> x;
		node tmp;
		tmp.pos = x;
		tmp.color = 'B';
		vec.push_back(tmp);
	}
	
	for (ll i = 0; i < n; i++)
	{
		cin >> x;
		node tmp;
		tmp.pos = x;
		tmp.color = 'W';
		vec.push_back(tmp);
	}
	
	sort(vec.begin(), vec.end(), cmp);
	node now = vec[0];
	for (ll i = 1; i < vec.size(); i++)
	{
		if (vec[i].color != now.color)
		{
			now = vec[++i];
			ans++;
		}
	}
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

