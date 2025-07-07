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
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll zero = 0;
        ll one = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                one++;
            if (a[i] == 0)
                zero++;
        }


        cout << one * (1LL << zero) << endl;
    }
}
