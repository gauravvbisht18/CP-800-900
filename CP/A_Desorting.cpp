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

        ll op = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                ll diff = arr[i + 1] - arr[i];

                ll req = diff / 2 + 1;

                op = min(op, req);
            }
            else
                op = 0;
        }

        cout << op << endl;
    }
    return 0;
}
