#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int x, n, ans, l = 0, r, p;
vector <int> chump (3,0);

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> x;
	cin >> n;
	chump[0] = x;
	
	cin >> p;
	chump[0] = x;
	chump[1] = x - p;
	
	for (int i = 1; i<n; i++){
		cin >> p;
		for (int i = 0; i<chump.size(); i++){
			if (p > chump[i] && p < chump[i+1]){
				chump.insert(i+1, chump[i+1);
				chump[i] = 
			}
		}
		
		
	}
}


