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
            cin >> arr[i];

        int flag = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i + 1] < arr[i])
            {
                flag = 1;
                cout << "YES" << endl;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                break;
            }
        }

        if (flag == 0)
            cout << "NO" << endl;
    }
    return 0;
}