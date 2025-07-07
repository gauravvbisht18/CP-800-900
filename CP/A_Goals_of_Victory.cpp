#include<bits/stdc++.h>
using namespace std;


int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
       
        vector<int>arr(n);

        for(int i =0 ;i < n -1 ;i++){
            cin >> arr[i];
        }

       long long sum = accumulate(arr.begin() , arr.end()  , 0 );

       cout << -1 * sum << endl;

      

    }

    return 0;
}
