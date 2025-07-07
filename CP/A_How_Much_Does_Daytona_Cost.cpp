#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n , k;
        cin >> n >> k;

        vector<int>arr(n);

        for(int i =0 ;i <n ;i++){
            cin >> arr[i];
        }
        long long count = 0;

        for(int i = 0;i < n ;i++){
             if(arr[i] == k) count++; 
        }

        if(count > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}