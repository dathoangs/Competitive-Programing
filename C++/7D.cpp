#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

const int base = 311;
const ll MOD = 1000000003;
const ll maxn = 1000005;

ll POW[maxn], hashT[maxn];

ll getHash(int i,int j) {
    return (hashT[j] - hashT[i - 1] * POW[j - i + 1] + MOD * MOD) % MOD;
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	string s, a;
	ll k, ans = 0;

	cin >> s >> a >> k;

	s = " " + s;
	POW[0] = 1;

	vector <ll> already;

    for (int i = 1; i <= s.length(); i++)
    	POW[i] = (POW[i - 1] * base) % MOD;	

    for (int i = 1; i <= s.length(); i++)
    	hashT[i] = (hashT[i - 1] * base + s[i] - 'a' + 1) % MOD;	

	fore (i,1,s.size()+1){
		ll cnt = 0;
	
		fore(j,i,s.size()+1){
			if (a[s[j] - 'a'] == '0'){
				cnt++;
			}

			bool chk = true;
			fore (jj,0,already.size()){
				if (already[jj] == getHash(i, j)){
					chk = false;
					break;
				}
			}

			if (chk){
				already.pb(getHash(i, j));
				ans++;
			}

			if (cnt == k) break;
		}

	}

	cout << ans << nl;
}