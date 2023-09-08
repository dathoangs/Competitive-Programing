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

    int ngto[10000001];

	ngto[0] = ngto[1] = 1;
	for (int i=2;i*i<=10000001;i++)
	{
		if (ngto[i] != 1)
		{
			for (int j=i*i; j<=10000001; j+=i)
				ngto[j] = 1;
		}
	}   

    ll t; cin >> t;
    while (t--){
        ll l, r, ans = 0;
        bool chk = false;
        cin >> l >> r;

        fore (i,l,r+1){
            if (i % 2 == 0 && i!=2){
                ans = i/2;
                break;
            } else {
                if (ngto[i] != 1){
                    ans = pow(i, 0.5);
                    chk = true;
                    break;
                }
            }
        }

        if (ans == 0) cout << -1 << nl;
        else {
            if (chk){
                cout << ans << " " << ans*(ans-1) << nl;
            } else {
                cout << ans << " " << ans << nl;
            }
        }
    }
}