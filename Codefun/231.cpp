#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll num, sum = 0;
	while (1)
	{
		cin >> num;
		if (num == 0)
			break;
		sum += num;
	}
	cout << sum;
	return 0;
}
