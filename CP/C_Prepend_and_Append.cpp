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
        string s;
        cin >> s;

        ll ans = n;
        ll left = 0;
        ll right = n - 1;

        while (left <= right)
        {
            if (s[left] != s[right])
                ans -= 2;

            else
                break;

            left++;
            right--;
        }

        cout << ans << endl;
    }
    return 0;
}
