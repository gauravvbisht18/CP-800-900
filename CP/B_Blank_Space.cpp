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

        ll count = 0;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                count = 0;
            else
            {
                count++;
                ans = max(ans, count);
            }
        }

        cout << ans << endl;
    }

    return 0;
}