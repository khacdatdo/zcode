#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isKPartitionPossibleRec(ll a[], ll subsetSum[], bool taken[], ll subset, ll k, ll n, ll curIdx, ll limitIdx)
{
    if (subsetSum[curIdx] == subset)
    {
        if (curIdx == k - 2)
            return true;
        return isKPartitionPossibleRec(a, subsetSum, taken, subset, k, n, curIdx + 1, n - 1);
    }
    for (ll i = limitIdx; i >= 0; i--)
    {
        if (taken[i])
            continue;
        ll tmp = subsetSum[curIdx] + a[i];
        if (tmp <= subset)
        {
            taken[i] = true;
            subsetSum[curIdx] += a[i];
            bool nxt = isKPartitionPossibleRec(a, subsetSum, taken, subset, k, n, curIdx, i - 1);
            taken[i] = false;
            subsetSum[curIdx] -= a[i];
            if (nxt)
                return true;
        }
    }
    return false;
};
bool isKPartitionPossible(ll a[], ll n, ll k)
{
    if (k == 1)
        return true;
    if (n < k)
        return false;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
        sum += a[i];
    if (sum % k != 0)
        return false;
    ll subset = sum / k;
    ll subsetSum[k];
    bool taken[n];
    memset(subsetSum, 0, sizeof subsetSum);
    memset(taken, false, sizeof taken);
    subsetSum[0] = a[n - 1];
    taken[n - 1] = true;
    return isKPartitionPossibleRec(a, subsetSum, taken, subset, k, n, 0, n - 1);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        if (isKPartitionPossible(a, n, k))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
}