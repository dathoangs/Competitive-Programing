#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int n, q, t, x, ans;
vector <int> stck;
vector <int> stck1;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n >> q;
	
	for (int i = 0; i<q; i++){
		cin >> t >> x;
		
		if (t == 1){
			stck.pb(x);
			stck1.pb(1);
			ans++;
		}
			
		if (t == 2){
			for (int i = 0; i<stck.size(); i++){
				if (stck[i] == x && stck1[i] == 1){
					stck1[i] = 0;
					ans--;
				}
			}
		}	
		
		if (t == 3){
			for (int i = 0; i<x; i++){
				if (stck1[i] == 1){
					ans--;
					stck1[i] = 0;
				}
			}
		}
		
		cout << ans << "\n";
		
	}
}


























