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

int main() {
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll k, n;

		cin >> k >> n;

		vector <ll> a(k);

		fore (i,0,k){
			a[i] = i+1;
		}

		ll times = 1;

		fore (i,2,k){
			// cout << i << " " <<  a[k-1] + times << endln;
			if (a[k-1] + times <= n){
				fore(j,i,k){
					a[j] += times;
				}	
				times++;			
			} else {
				fore(j,i-1,k-1){
					a[j] += n-a[k-1];
				}

				a[k-1] = n;
			}

		}



		fore (i,0,k){
			cout << a[i] << " ";
		}

		cout << endln;

	}

	cout << endln;
	return 0;	
}