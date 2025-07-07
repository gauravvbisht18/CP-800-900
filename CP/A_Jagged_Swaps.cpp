#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i =0 ;i<n;i++){
            cin >> arr[i];
        }

        int first = arr[0];
        if(first == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}