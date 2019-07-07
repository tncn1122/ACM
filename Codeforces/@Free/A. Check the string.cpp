#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/contest/960/problem/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	string s;	cin>>s;
	ll i = 0, a = 0, b = 0, c = 0;
	if (s[i] == 'a'){
		while(s[i] == 'a' && i < s.length() - 1){
		a++; 
		i++;
		}
		if(s[i] == 'b'){
			while(s[i] == 'b' && i < s.length() - 1){
			b++; 
			i++;	
			}
			if(s[i] == 'c'){
				while(s[i] == 'c' && i < s.length()){ 
				c++; 
				i++;
				}
				if (i == s.length() && (c == a || c == b)){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}
