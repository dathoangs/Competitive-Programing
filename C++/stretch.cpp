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

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	ll n;

	cin >> n;

	vector <int> a(n), vlf(n), vrt(n);
	int ans = 0;

	fore(i,0,n){
		cin >> a[i];
	};

	fore (i,0,n){
		if (i > 0){
			fore(j,0,i){
				if (a[j] > a[i]){
					vlf[i]++;
				}
			}
		}

		if (i < n-2){
			fore(j,i,n){
				if(a[j] < a[i]){
					vrt[i]++;
				}
			}
		}
	}

	fore(i,0,n-1){
		fore(j,i+1,n){
			ans+= max(max(abs(a[i]-a[j]), vlf[i]+(j-i)), vrt[j]+(j-i));
		}
	}

	cout << ans;


	cout << endln;
	return 0;	
}