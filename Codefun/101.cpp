#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, sum = 0; cin >> n;
    for (ll i = 0; sum < n; i++)
    {
    	sum += i;
    	if (sum > n)
    	{
    		cout << "NO";
    		return 0;
		}
	}
    cout << "YES";
    return 0;
}
