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

        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(arr[i], arr[j]) <= 2)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

        return 0;
    }