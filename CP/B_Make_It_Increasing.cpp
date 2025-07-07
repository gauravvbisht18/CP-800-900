#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll op = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (arr[i] >= arr[i + 1])
            {
                op++;
                arr[i] /= 2;
                if (arr[i] == 0)
                    break;
            }
            if (arr[i] == 0 && arr[i + 1] == 0)
            {
                op = -1;
                break;
            }
        }

        cout << op << endl;
    }
}