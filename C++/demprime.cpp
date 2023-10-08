#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

        int n, ans = 0;
        cin >> n;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
        }

        for (int i = 0; i<n; i++){
            bool chk = true;

            for(int j = 2; j*j <= a[i]; j++){
                if(a[i] % j != 0){
                    chk = false;
                    break;
                }
            }

            if (chk) ans++;
        }

        cout << ans;
    
}