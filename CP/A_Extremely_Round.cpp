#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll x)
{
    ll cdigit = 0;
    ll czero = 0;

    while (x)
    {
        if (x % 10 == 0)
        {
            czero++;
        }

        cdigit++;
        x /= 10;
    }

    return czero == cdigit - 1;
}
int main()
{

    vector<ll> round;
    for (ll i = 1; i <= 999999; i++)
    {
        if (check(i) == true)
            round.push_back(i);
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = 0;

        for (ll i = 0; i < round.size(); i++)
        {
            if (round[i] <= n)
                ans++;

            else
                break;
        }

        cout << ans << endl;
    }

    return 0;
}