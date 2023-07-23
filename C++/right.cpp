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

	ll n, m;

	cin >> n >> m;

	vector <string> b(n);
	vector <vector <vector<int>>> res (4, vector<vector<int>> (n, vector<int> (m, 0)));

	typedef tuple <int, int, char> tiic;

	queue <tiic> q;

	
	


	cout << endln;
	return 0;	
}