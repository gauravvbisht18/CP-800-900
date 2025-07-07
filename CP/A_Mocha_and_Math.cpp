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
            cin >> arr[i];

        ll ans = arr[0];

        for (int i = 1; i < n; i++)
        {
            ans &= arr[i];
        }

        cout << ans << endl;
    }
}