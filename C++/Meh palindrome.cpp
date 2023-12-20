
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

const ll base = 911382323;
const ll MOD = 972663749;
const ll maxn = 1e7;

ll POW[maxn], Hash[maxn];

ll getHash(ll i, ll j){
	return (Hash[j] - Hash[i-1]*POW[j-i+1] + MOD * MOD) % MOD;
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	string s;
	cin >> s;

	s = " " + s;
	ll len = s.length();

	POW[0] = 1;
	fore (i,1,len){
		POW[i] = (POW[i-1] * base) % MOD;
	}

	fore (i,1,len){
		Hash[i] = (Hash[i-1]*base + s[i] - 'a'+1) % MOD;
	}

	map <ll, ll> meh;
	ll ans = 0;

	fore (i,1,len){
		ll p1;
		if (i&1) p1 = i/2 + 2;
		else p1 = i/2 +1;
		// cout << 1 << " " << i << " " << i/2 << ' ' << p1 << " " << meh[getHash(1, 1+(i-1)/2)]+1 << nl;

		if (getHash(1, i/2) == getHash(p1, i)){
			ans += meh[getHash(1, i/2)]+1;
			
			meh[getHash(1, i)] = meh[getHash(1, i/2)]+1;		
		}	
	}

	cout << getHash(1,3) <<  " " << getHash(5, 7) << nl;

	cout << ans << nl;
}