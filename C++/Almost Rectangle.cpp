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

	ll t;

	cin >> t;

	while (t--){
		ll n, x1 = 0, x2 = 0, y1 = 0, y2 = 0;
		bool chk = false;

		cin >> n;

		string s[n];

		fore (i,0,n){
			cin >> s[i];
		}

		fore (i,0,n){
			fore (j,0,n){
				if (s[i][j] == '*'){
					if (chk){
						x2 = i;
						y2 = j;
					} else {
						x1 = i;
						y1 = j;		
						chk = !chk;				
					}
				}
			}
		}

        s[x1][y2] = '*';
        s[x2][y1] = '*';

		// cout << y1 << " " << y2 << endl;

        if (y1 == y2){
            if (y1 + 1 > n-1){
                s[x1][y1-1] = '*';
                s[x2][y2-1] = '*';
            } else {
                s[x1][y1+1] = '*';
                s[x2][y2+1] = '*';
            }
        } else if (x1 == x2) {
            if (x1 + 1 > n-1){
                s[x1-1][y1] = '*';
                s[x2-1][y2] = '*';
            } else {
                s[x1+1][y1] = '*';
                s[x2+1][y2] = '*';
            }
        }

		fore (i,0,n){
			cout << s[i] << endl;
		}
	}
}