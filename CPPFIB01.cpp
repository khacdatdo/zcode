#include <iostream>
#include <cmath>

using namespace std;

main()
{
	int t;
	long long r = pow(10, 9) + 7;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long f[n + 10];
		f[0] = 0;
		f[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			f[i - 1] = f[i - 1] % r;
			f[i - 2] = f[i - 2] % r;
			f[i] = (f[i - 1] + f[i - 2]) % r;
		}
		cout << f[n] % r << endl;
	}
}