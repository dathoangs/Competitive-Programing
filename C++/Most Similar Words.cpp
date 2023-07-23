#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

bool compare(const char &a, const char &b)
{
    return (a < b);
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, m, pre, ans = INT_MAX;

		cin >> n >> m;
		vector <string> a(n);

		fore (i,0,n){
			cin >> a[i];
		}

		fore (i,0,n){
			fore(j,i+1,n){
				pre = 0;

				fore(k,0,m){
					pre += abs((int)a[i][k] - (int)a[j][k]);
				}

				if (pre < ans){
					ans = pre;
				}

			}
		}

		cout << ans << endln;


	}

	cout << endln;
	return 0;	
}