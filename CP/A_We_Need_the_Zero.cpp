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

        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total ^= arr[i];
        }

        if (n % 2 == 1)
        {
            cout << total << endl;
        }
        else
        {
            if (total == 0)
                cout << total << endl;

            else
                cout << -1 << endl;
        }
    }
    return 0;
}