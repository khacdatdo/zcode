#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll lon[n], nho[n];
        stack<ll> st;
        for (ll i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && a[st.top()] <= a[i])
                st.pop();
            ll ans = -1;
            if (!st.empty())
                ans = st.top();
            lon[i] = ans;
            st.push(i);
        }
        while (!st.empty())
            st.pop();
        for (ll i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && a[st.top()] >= a[i])
                st.pop();
            ll ans = -1;
            if (!st.empty())
                ans = st.top();
            nho[i] = ans;
            st.push(i);
        }
        for (ll i = 0; i < n; i++)
        {
            if (lon[i] == -1)
                cout << "-1 ";
            else
            {
                if (nho[lon[i]] == -1)
                    cout << "-1 ";
                else
                    cout << a[nho[lon[i]]] << " ";
            }
        }
        cout << endl;
    }
}