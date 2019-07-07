#include "bits/stdc++.h"
using namespace std;
const long double M_PI = acos(-1);

int main()
{
  long long n , R;
  cin >> n >> R;
  cout << fixed << setprecision(7) << R * sin(M_PI / n) / (1 - sin(M_PI / n));
}
