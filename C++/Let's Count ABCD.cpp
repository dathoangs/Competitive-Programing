#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ull fpow(long long a, long long b)
{
    ull res = 1;
    while(b)
    {
        if(b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
int t, k, tmp;
string s;
ull ans, n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> t;
	
	while (t--){
		cin >> n >> k;
		ans = fpow(4, n);
		
		for (int i = 0; i<k; i++){
			cin >> s;
			if (n < s.length()){
			} else {
				ans -= n-s.length()+1;
			}
		}
		cout << ans << "\n";
	}
}






















