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

    ll n, a, b, tmp;
    ll ans = INT64_MIN; 

    cin >> n >> a >> b;

    ll pre[n+1];
    pre[0] = 0;

    fore (i,1,n+1){
        cin >> tmp;
        pre[i] = pre[i-1] + tmp;
    }

    multiset <ll> ms;

    fore (i,a,n+1){
        if (i > b) {
            ms.erase (ms.find(pre[i-b-1]));
        }

        ms.insert(pre[i-a]);

        ans = max(ans, pre[i] - *(ms.begin()));

    }

    cout << ans;




}