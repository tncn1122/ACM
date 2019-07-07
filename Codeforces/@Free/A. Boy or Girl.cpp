#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/236/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	string s;
	cin>>s;
	map <char,ll> alphabet;
	ll count=0;
	fo(i,s.length()){
		if(alphabet[s[i]]==0){
			count++;
			alphabet[s[i]]++;
		}
	}
	if (count&1) 	cout<<"IGNORE HIM!";
	else 	cout<<"CHAT WITH HER!";
	return 0;
}
