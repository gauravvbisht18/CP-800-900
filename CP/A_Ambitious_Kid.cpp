#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    ll n;
    cin >> n;

    vector<ll>arr(n);

    for(int i =0 ;i < n ;i++){
        cin >> arr[i]; 
    }


    ll mini = INT_MAX;

    for(int i =0 ; i< n;i++){
        ll digit = abs(arr[i]);
        mini = min(digit , mini);
    }

    cout << mini << endl;
    return 0;
}