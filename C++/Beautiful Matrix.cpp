#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for(a,i) for(int i = 0; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll a[10][10], ff = , ss;

	for (5,i){
		for (5,j){
			cin >> a[i][j];
			if (a[i][j] == 1){
				ff = i;
				ss = j;
			} 
		}
	}	

	cout << abs(ff - 2) + abs(ss - 2);
}