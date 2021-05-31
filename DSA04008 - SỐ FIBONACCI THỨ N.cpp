#include <bits/stdc++.h>
#define ll long long
const long int N = 1e6 + 5;
const long int mod = 1e9 + 7;
using namespace std;

int n;
ll fibo[2][2], add[2][2];
void nhan(ll f[2][2], ll m[2][2])
{
	ll a = (f[0][0] * m[0][0] % mod + f[0][1] * m[1][0] % mod) % mod;
	ll b = (f[0][0] * m[0][1] % mod + f[0][1] * m[1][1] % mod) % mod;
	ll c = (f[1][0] * m[0][0] % mod + f[1][1] * m[1][0] % mod) % mod;
	ll d = (f[1][0] * m[0][1] % mod + f[1][1] * m[1][1] % mod) % mod;
	fibo[0][0] = a;
	fibo[0][1] = b;
	fibo[1][0] = c;
	fibo[1][1] = d;
}
void POW(ll f[2][2], int n)
{
	if (n <= 1)
	{
		return;
	}
	POW(f, n / 2);
	nhan(f, f);
	if (n % 2 != 0)
		nhan(f, add);
}
void dat()
{
	cin >> n;
	add[0][0] = add[0][1] = add[1][0] = fibo[0][0] = fibo[0][1] = fibo[1][0] = 1;
	add[1][1] = fibo[1][1] = 0;

	if (n == 0)
	{
		cout << 0 << endl;
		return;
	}
	POW(fibo, n - 1);
	cout << fibo[0][0] << endl;
}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		dat();
	}

	return 0;
}
