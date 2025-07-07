#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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

        int k = abs(arr[0] - 1);

        for (int i = 1; i < n; i++)
        {
            k = gcd(k, abs(arr[i] - (i + 1)));
        }

        cout << k << endl;
    }
    return 0;
}

