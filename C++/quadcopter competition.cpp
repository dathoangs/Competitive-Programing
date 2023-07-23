#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int ans, x1, y1, x2, y2;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> x1 >> y1 >> x2 >> y2;
	
	if (x1 != x2 && y1 != y2){
		ans += (abs(x1-x2))*2;
		ans += (abs(y1-y2))*2;
		ans += 4;
	}
	
	if (x1 == x2 && y1 != y2){
		ans += (abs(y1-y2) + 2) * 2 + 2; 
	}
	
	if (x1 != x2 && y1 == y2){
		ans += (abs(x1-x2) + 2) * 2 + 2; 
	}
	
	cout << ans;	
}


