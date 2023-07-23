#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, q;

    cin >> n >> q;

    ll a[n+7], pre[n+7][n+7] = {0};

    fore (i,0,n){
        cin >> a[i];

        pre[i][i] = a[i];
    }

    fore (i,0,n){
        fore (j,i+1,n){
            if(a[j] < pre[i][j-1]){
                pre[i][j] = a[j]; 
            } else {
                pre[i][j] = pre[i][j-1]; 
            }
        }
    }

    ll x, y;

    fore (i,0,q){
        cin >> x >> y;

        cout << pre[x-1][y-1] << endl;
    }


}