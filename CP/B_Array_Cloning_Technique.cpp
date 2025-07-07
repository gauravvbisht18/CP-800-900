#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<ll, ll> mp;

        for (int i = 0; i < n; i++)
            mp[arr[i]]++;

        ll freq = 0;

        for (auto it : mp)
            freq = max(freq, it.second);

        ll op = 0;

        while (freq < n)
        {
            op++;
            if (freq * 2 <= n)
            {
                op += freq;
                freq *= 2;
            }
            else
            {
                op += n - freq;
                freq = n;
            }
        }

        cout << op << endl;
    }
    return 0;
}