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
        ll pro = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 2)
            {
                count++;
            }
        }

        if (count % 2 == 1){
            cout << -1 << endl;
            continue;
        }

        ll twos_so_far = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 2)
                twos_so_far++;

            if (twos_so_far == count / 2)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}