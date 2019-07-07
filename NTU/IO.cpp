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
priority_queue <int> Q;
set <int> ans;
string s;
//===========

int num(string a)
{
	a.erase(0, 1);
	return stoll(a);
}

void Result()
{
	//code here
	while(cin >> s)
	{
		if (s == "-")
		{
			if (!Q.empty())
			{
				int now = Q.top();
				while(!Q.empty() && Q.top() == now)
					Q.pop();
			}
		}
		else
		{
			if (Q.size() < 15000)
			{
				Q.push(num(s));
			}
		}
	}
	while (!Q.empty())
	{
		ans.insert(Q.top());
		Q.pop();
	}
	cout << ans.size() << endl;
	for (auto x = ans.rbegin(); x != ans.rend(); x++)
	{
		cout << *x << " ";
	}
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
