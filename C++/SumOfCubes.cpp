#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
map <ll, bool> mp;
int t, chk;
ll n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	for (ll i = 1; i<=10000; i++)
		mp[i*i*i] = 1;
		
	cin >> t;
	
	while (t--)
	{
		cin >> n;
		chk = 0;
		for (ll i = 1; i*i*i<n; i++)
		{
			if (mp[n-i*i*i] == 1){
				chk++;
				break;
			}
		}
		if (chk == 1)
			cout << "YES" << "\n";
		else 
			cout << "NO" << "\n";
	}
}


