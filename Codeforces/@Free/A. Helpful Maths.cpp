#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/339/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	string s;
	vector <char> num;
	cin>>s;
	for(ll i = 0; i < s.length(); i+=2)
		num.push_back(s[i]);
	sort(num.begin(),num.begin() + num.size());
	if (num.size() < 2)
		cout<<num.front();
	else
		fo(i,num.size())
		{
			cout<<num[i];
			if (i < num.size()-1)
			cout<<"+";
		}
	
	return 0;
}
