#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        unordered_map<ll, ll> mpp;

        for (ll i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }
        ll freq = 0;

        for (auto it : mpp)
        {
            if (it.second % 2 != 0)
                freq++;
        }

        if (freq > k + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}