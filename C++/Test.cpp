#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes "YES\n";
#define no "NO\n";

const int maxn = 10e6;
bool check[maxn];

void sang(){
    for(int i=0;i<maxn;i++){
        check[i] = true;
    }

    check[0]= false;
    check[1]= false;

    for(int i=2; i*i<maxn; i++){
        if(check[i]){
            for(int j=i*i;j<maxn;j+=i){
                check[j] = false;
            }
        }
    }
}

void solve(){
    int n; cin >> n;

    for(int i=2; i<=n; i++){
        if (check[i] && i<=n){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    sang();
    
    int t; cin>>t;

    while(t--){
        solve();
    }
}