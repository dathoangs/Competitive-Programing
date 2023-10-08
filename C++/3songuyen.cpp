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

    ll a[7];
    map <ll, ll> mp;

    fore (i,0,7){
        cin >> a[i];
        mp[a[i]]++;
    }

    vector <ll> ans;
    
    ans.pb(a[6] - a[5]);
    ans.pb(a[6] - a[4]);
    ans.pb(a[6] - (ans[0] + ans[1]));

    sort(all(ans));
    
    if (--mp[ans[0]] >= 0 && --mp[ans[1]] >= 0 && --mp[ans[2]] >= 0){
        cout << ans[0] << " " << ans[1] << " " << ans[2];
    } else cout << -1;

    
}