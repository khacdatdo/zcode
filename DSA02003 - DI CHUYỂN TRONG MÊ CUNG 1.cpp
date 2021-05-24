#include <iostream>
#include <string>
using namespace std;
bool ktra = false;
int n, a[15][15]; 
string s;
void in(int m) {
	for (int i = 0; i < m; i++)
	{
		cout << s[i];
	}
	cout << " ";
}

void solve(int i, int j, int d) {	
	if (i == n-1 && j == n-1)
	{
		ktra = true;
		in(d);
		return;
	}
	if (a[i+1][j] == 1)
	{
		s[d] = 'D';
		
		solve(i + 1, j, d + 1);
	}
	if (a[i][j+1] == 1)
	{
		s[d] = 'R';
		
		solve(i, j + 1, d + 1);
	}
	
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		s = "";
		cin >> n;
		ktra = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		if (a[0][0] == 1)
			solve(0, 0, 0);

		
		if (ktra == false)
			cout << "-1";

		cout << endl;
	}
}