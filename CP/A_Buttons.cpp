#include<bits/stdc++.h>
using namespace std;
using  ll = long long;

int main(){

    int t;
    cin >> t;

    while(t--){
    

        ll a , b , c;
        cin >> a >> b >> c ;

        if(c % 2 == 1){

            if(b > a) cout << "Second" << endl;
            else cout << "First" << endl;

        }

        else{

            if(b < a) cout << "First" << endl;
            else cout << "Second" << endl;

        }
        


    }

    return 0;

}