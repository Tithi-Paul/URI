#include<bits/stdc++.h>
using namespace std;

void Decimal_To_Base(unsigned long long int D){

    vector<string>res;
    unsigned long long int rem;
    string Des, kem, ans="";
    while(D>0){
        rem = D%32;
        if(rem >=10){
            Des = (rem-10) + 'A';
            ans = ans+Des;
        }
        else{
            kem = rem + '0';
            ans = ans+kem;
        }
        D/=32;
    }
    reverse(ans.begin(), ans.end());
    //for(auto i : res)
        cout << ans;
    cout << endl;
}

int main(){
    unsigned long long int D;
    //cin >> D;
    while(cin >> D){
        if(D==0){
            cout << 0 << endl ;
            break;
        }else
        Decimal_To_Base(D);
    }
}

