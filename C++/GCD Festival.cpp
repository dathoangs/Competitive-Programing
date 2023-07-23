#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ull ans; int n;
vector <int> a;
unsigned int gcd(unsigned int u, unsigned int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}
ll fpow(long long a, long long b)
{
    long long res = 1;
    while(b)
    {
        if(b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	cin >> n;
	a.resize(n+7);
	for (int i = 1; i<=n; i++){
		cin >> a[i];
	}
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=n; j++){
			ans += gcd(a[i],a[j]) * gcd(i,j);
			ans %= fpow(10,9) +7;
		}
	}
	cout << ans;
}


