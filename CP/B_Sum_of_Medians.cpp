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

        vector<ll> v(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> v[i];
        }

        ll p = n * k;

        ll sum = 0;

        while (k--)
        {
            p -= (n / 2 + 1);

            sum += v[p];
        }

        cout << sum << endl;
    }
    return 0;
}