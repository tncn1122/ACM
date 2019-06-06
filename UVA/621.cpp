#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)

typedef long long ll;
typedef double db;

//declare here
string s;
ll n;
//===========


void Result()
{
	//code here
	cin >> n;
	while(n--)
	{
		cin >> s;
		if (s == "1" || s == "4" || s == "78")
		{
			cout << '+' << endl;
		}
		else
		{
			if (s[s.length()-1] == '5' && s[s.length()-2] == '3')
				cout << '-' << endl;
			else if (s[0] == '9' && s[s.length()-1] == '4')
				cout << '*' << endl;
			else
				cout << '?' << endl;
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

