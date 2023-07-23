#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
vector <int> a;
vector <int> b;
vector <int> x;
vector <int> y;
vector <int> c;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	int A, B, M, tmp;
	ull ans = INT_MAX;
	cin >> A >> B >> M;
	
	for (int i = 0; i<A; i++){
		cin >> tmp;
		a.pb(tmp);
	}
	for (int i = 0; i<B; i++){
		cin >> tmp;
		b.pb(tmp);
	}	
	for (int i = 0; i<M; i++){
		cin >> tmp;
		x.pb(tmp);
		cin >> tmp;
		y.pb(tmp);		
		cin >> tmp;
		c.pb(tmp);			
	}
	
	for (int i = 0; i<M; i++){
		if (a[x[i]-1] + b[y[i]-1] - c[i] < ans){
			ans = a[x[i]-1] + b[y[i]-1] - c[i];
		} 
	}
	
	sort (a.begin(), a.end());
	sort (b.begin(), b.end());

	if (a[0] + b[0] < ans)
		cout << a[0] + b[0]	;
	else
		cout << ans;
}


