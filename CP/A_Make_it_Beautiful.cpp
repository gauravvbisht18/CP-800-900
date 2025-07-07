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

        sort(arr.begin(), arr.end());

        ll maxi = arr[n - 1];
        ll mini = arr[0];

        if (maxi == mini)
            cout << "NO" << endl;

        else
        {
      
            cout << "YES" << endl;
            cout << maxi << " ";
            for (int i = 0; i < n - 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}