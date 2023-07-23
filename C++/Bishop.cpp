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

	ll t;
	cin >> t;

	while(t--){
		vector <string> a;
		string tmp;

		fore(i,0,8){
			cin >> tmp;
			a.pb(tmp);				
		}

		fore (i,1,7){
			fore(j,1,7){
				if (a[i][j] == '#' && a[i-1][j+1] == '#' && a[i-1][j-1] == '#' && a[i+1][j-1] == '#'){
					cout << i+1 << " " << j+1 << endln;
					break;					
				}
			}

		}

	}

	cout << endln;
	return 0;	
}