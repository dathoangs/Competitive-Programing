#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int n, k;
vector <int> pic;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n >> k;
	pic.resize(n+7);
	
	if (k == 1){
		cout << 0;
		return 0;
	}
	
	for (int i = 0; i<n; i++){
		cin >> pic[i];
	}
	
	sort(pic.begin(), pic.end());
	
	
	
}



















