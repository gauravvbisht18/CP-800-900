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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        ll count = 1;
        ll maxi = 1;

        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) <= k)
            {
                count++;
            }
            else
            {
                maxi = max(count, maxi);
                count = 1;
            }
        }

        maxi = max(count, maxi);

        cout << n - maxi << endl;
    }
    return 0;
}