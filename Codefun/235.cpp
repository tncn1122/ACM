#include <bits/stdc++.h>
using namespace std;
typedef double ll; // <======
int main()
{
	ll n, num, sum = 0;
	cin >> n; 
	for (ll i = 0; i < n; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << fixed << setprecision(2) << sum / n;
	return 0;
}
