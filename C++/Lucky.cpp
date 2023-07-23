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

	ll t, pre_ans1, pre_ans2;
	string s;

	cin >> t;

	while (t--){
		pre_ans1 = 0;
		pre_ans2 = 0;
		cin >> s;

		for (int i = 0; i<3; i++)
		{
			pre_ans1 += (int)s[i];
		}

		for (int i = 3; i<6; i++)
		{
			pre_ans2 += (int)s[i];
		}

		if (pre_ans1 == pre_ans2){
			cout << "YES" << endln;
		} else {
			cout << "NO" << endln;
		}

	}

	cout << endln;
	return 0;	
}