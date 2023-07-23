#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
stack <int> stck;
string s;
int ans, mx, tmp, chk = 0;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> s;
	for (int i = 0; i<s.length(); i++){
		if (s[i] == '('){
			chk = 1;
			stck.push(s[i]);
			tmp++;

		} else {
			if (stck.size() > 0){
				stck.pop();
				tmp++;
			} else {
				if (chk == 1){
					ans++;
					chk = 0;
					chk = 0;
					tmp = 0;
					if (mx < tmp)
						mx = tmp;					
				}	
			}
			
		}
	}
	
	cout << mx << " " << ans;
}


