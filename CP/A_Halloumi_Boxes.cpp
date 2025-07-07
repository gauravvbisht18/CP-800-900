#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> a = arr;

        sort(a.begin(), a.end());

        if (a == arr || k > 1)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}