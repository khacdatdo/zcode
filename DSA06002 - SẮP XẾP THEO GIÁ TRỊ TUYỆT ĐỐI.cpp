// C++ program to sort an array based on absolute 
// difference with a given value x. 
#include <bits/stdc++.h> 
using namespace std; 

void arrange(int arr[], int n, int x) 
{ 
	// Below lines are similar to insertion sort 
	for (int i = 1; i < n; i++) { 
		int diff = abs(arr[i] - x); 

		// Insert arr[i] at correct place 
		int j = i - 1; 
		if (abs(arr[j] - x) > diff) { 
			int temp = arr[i]; 
			while (abs(arr[j] - x) > diff && j >= 0) { 
				arr[j + 1] = arr[j]; 
				j--; 
			} 
			arr[j + 1] = temp; 
		} 
	} 
} 

// Function to print the array 
void print(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 

// Main Function 
int main() 
{ 
	int t;
	cin >> t;
	while (t--) {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
	arrange(arr, n, x); 
	print(arr, n);
	cout << endl;
	}
	return 0; 
}
    cin >> t;
    while (t--) {
        ll n, x, a;
        cin >> n >> x;
        vector <pair<ll, ll>> v;
        for (ll i = 0; i < n; i++) {
            cin >> a;
            v.push_back(make_pair(a, abs(x - a)));
        }
        MergeSort(0, n - 1, v);
        for (vector<pair<ll, ll>> :: iterator it = v.begin(); it != v.end(); it++)
            cout << it->first << " ";
        cout << endl;
    }
    return 0;
}