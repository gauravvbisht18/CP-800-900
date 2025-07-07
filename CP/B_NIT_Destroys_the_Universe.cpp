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

        ll zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                zero++;
        }

        bool found = false;
        int left = 0;
        int right = n - 1;

        while (arr[left] == 0)
            left++;
        while (arr[right] == 0)
            right--;

        for (int i = left; i <= right; i++)
        {
            if (arr[i] == 0)
                found = true;
        }

        if (zero == n)
            cout << 0 << endl;

        else if (found == false)
            cout << 1 << endl;

        else
            cout << 2 << endl;
    }
    return 0;
}