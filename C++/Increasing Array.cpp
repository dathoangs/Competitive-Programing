#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define NO "NO\n"
#define YES "YES\n"
using namespace std;

bool cmp(ll a, ll b){
	return a > b;
}

int main() {
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, pos = 0, chk = 0;

	cin >> n;

	vector <ll> a, ans;

	for (int i = 1; i<=n; i+=2){
		a.pb(i);
		pos++;
	}


	for (int i = 2; i<=n; i+=2){
		a.pb(i);
	}

	auto check = [&](bool res = false)
	{
		fore(i,0,n-1){
			if (abs(a[i] - a[i+1]) == 1){
				res = true;
				chk++;
				break;
			}
		}		
		return res;
	};

	if (!check()) ans = a;
	else {
		sort(a.begin()+pos, a.end(), cmp);
		if (!check()) ans = a;
		else {
			sort(a.begin(), a.begin()+pos, cmp);
			if (!check()) ans = a;
			else {
				sort(a.begin()+pos, a.end());
				if (!check()) ans = a;				
			}			
		}		
	}

	if (chk == 4){
		cout << "NO SOLUTION";
	} else {
		fore(i,0,n){
			cout << ans[i] << " ";
		}
	}

	cout << endln;
	return 0;	
}