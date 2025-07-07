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

        for (int i = 0; i < n - 1; i++)
        {
            if ((arr[i] % 2) == (arr[i + 1] % 2))
                count++;
        }

        cout << count << endl;
    }

    return 0;
}