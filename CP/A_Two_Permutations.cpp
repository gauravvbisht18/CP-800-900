#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        if (a + b + 2 <= n || (a == b && a == n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}