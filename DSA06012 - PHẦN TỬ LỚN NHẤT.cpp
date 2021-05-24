#include <bits/stdc++.h>

using namespace std;
#define ll long long
void Merge(ll l, ll mid, ll r, vector <ll> &v) {
    ll n1 = mid - l + 1;
    ll n2 = r - mid;
    vector <ll> L(v.begin() + l, v.begin() + l + n1);
    vector <ll> R(v.begin() + l + n1, v.begin() + l + n1 + n2);
    ll i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        v[k] = L[i];
        i++; k++;
    }
    while (j < n2) {
        v[k] = R[j];
        j++; k++;
    }
}
void MergeSort(ll l, ll r, vector <ll> &v)  {
    if (l >= r) return;
    ll mid = (l + r) / 2;
    MergeSort(l, mid, v);
    MergeSort(mid + 1, r, v);
    Merge(l, mid, r, v);
}
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, x, k;
        cin >> n >> k;
        vector <ll> v;
        for (ll i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }
        MergeSort(0, n - 1, v);
        for (vector <ll> :: reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
            cout << *it << " ";
            k--;
            if (k == 0) break;
        }
        cout << endl;
    }
    return 0;
}