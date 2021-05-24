#include <bits/stdc++.h>

using namespace std;
#define ll long long
void Merge(ll l, ll mid, ll r, vector <pair<ll, ll>> &v) {
    ll n1 = mid - l + 1;
    ll n2 = r - mid;
    vector <pair<ll, ll>> L(v.begin() + l, v.begin() + l + n1);
    vector <pair<ll, ll>> R(v.begin() + l + n1, v.begin() + l + n1 + n2);
    ll i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i].second >= R[j].second) {
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
void MergeSort(ll l, ll r, vector<pair<ll, ll>> &v) {
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
        ll n, x;
        cin >> n;
        map <ll, ll> b;
        for (ll i = 0; i < n; i++) {
            cin >> x;
            b[x]++;
        }
        vector <pair<ll, ll>> v(b.begin(), b.end());
        MergeSort(0, v.size() - 1, v);
        for (vector <pair<ll, ll>> :: iterator it = v.begin(); it != v.end(); it++) {
            for (ll j = 0; j < it->second; j++) 
                cout << it->first << " ";
        }
        cout << endl;
    }
    return 0;
}