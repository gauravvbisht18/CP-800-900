#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll min = 0;
        ll max = 0;

        for (int i = 0; i < n; i++)
        {
            max += ceil(a[i] * 1.0 / x);
            min += a[i];
        }

        min = ceil(min * 1.0 / x);

        cout << min << " " << max << endl;
    }
    return 0;
}
