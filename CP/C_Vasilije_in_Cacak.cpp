#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> k >> x;

        ll mini = k * (k + 1) / 2;
        ll maxi = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);

        if (x >= mini && x <= maxi)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}