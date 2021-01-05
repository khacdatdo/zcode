#include <bits/stdc++.h>

using namespace std;

void dayNT(long N, long long a[])
{
    bool check[N + 1];
    for (int i = 2; i <= N; i++)
    {
        check[i] = true;
    }
    for (int i = 2; i <= N; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                check[j] = false;
            }
        }
    }
    int z = 0;
    for (long long i = 2; i <= N; i++){
        if (check[i] == true) {
            a[z++] = i;
        }
    }
    for (int i = 0; i < z; i++) {
    	long long t = a[i];
    	a[i] = a[z - 1 - i];
    	a[z - 1 - i] = t;
	}
}

int timUoc(long long n, long long a[]) {
	if (n <= 1) return 0;
	int i = 0;
	for (i = 0; a[i]; i++) {
		if (n % a[i] == 0) {
			cout << a[i] << " ";
			n = n / a[i];
			i--;
		}
	}
}

int main()
{
    int N = 90000;
    long long a[N+1] = {0};
    dayNT(N, a);
    int T;
    cin >> T;
    while (T--) {
    	long long n;
    	cin >> n;
    	timUoc(n, a);
    	cout << endl;
	}
	return 0;
}
