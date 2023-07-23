#include <bits/stdc++.h>
using namespace std;
int n, Min = INT_MAX;
map <int, int> mp;
vector <int> a;
vector <int> b;

int main()
{
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	a.resize(n+5);
	b.resize(n+5);
	
	for (int i = 0; i<n; i++)
		cin >> a[i];
	for (int i = 0; i<n; i++)
		cin >> b[i];
		
	for (int i = 0; i<n; i++){
		if (mp.count(a[i]) == 0){
			for (int j = 0; j<n; j++){
				if (abs(a[i] - b[j]) < Min)
					Min = abs(a[i] - b[j]);
			}
			mp[a[i]] = 1;
		}
	}
	
	cout << Min;
}
