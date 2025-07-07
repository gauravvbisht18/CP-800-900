#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll maxi = b;
        for (int i = 0; i < n; i++)
        {
            maxi += min(arr[i], a - 1);
        }

        cout << maxi << endl; 
    }
    return 0;
}