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

        int pos = 0;
        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                pos++;
            else
                neg++;
        }

        ll op = 0;

        while (pos < neg || neg % 2 == 1)
        {
            op++;
            pos++;
            neg--;
        }

        cout << op << endl;
    }
}