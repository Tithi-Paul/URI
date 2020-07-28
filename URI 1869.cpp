#include<bits/stdc++.h>
using namespace std;
void Decimal_To_Base(unsigned long long int D){
    vector<string>res;
    unsigned long long int rem;
    string Des, kem;
    while(D>0){
        rem = D%32;
        if(rem >=10){
            Des = (rem-10) + 'A';
            res.push_back(Des);
        }
        else{
            kem = rem + '0';
            res.push_back(kem);
        }
        D/=32;
    }
    reverse(res.begin(), res.end());
    for(auto i : res)
        cout << i << "";
    cout << endl;
}
int main(){
    unsigned long long int D;
    //cin >> D;
    while(cin >> D){
        if(D==0){
            cout << 0 << endl;
            break;
        }else
        Decimal_To_Base(D);
    }
}
