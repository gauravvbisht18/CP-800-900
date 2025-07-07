#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool contin = false;
        int count = 0;



        for(int i = 0; i< n ;i++){
          if(s[i] == '.' && i + 1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
            contin = true;
            break;
          }
          if(s[i] == '.'){
            count++;
          }
        }


        if(contin){
            cout << 2 << endl;
        }
        else{
            cout << count << endl;
        }

        
    }
    
    
    
    
    
    return 0;
}