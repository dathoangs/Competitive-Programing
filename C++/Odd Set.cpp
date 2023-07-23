#include <bits/stdc++.h>
using namespace std;
int tmp, t, n;
vector <int> odd;
vector <int> even;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> n;
		odd.clear();
		even.clear();
		
		for (int nn = 0; nn<n*2; nn++){
			cin >> tmp;
			if (tmp % 2 == 0)
				even.push_back(tmp);
			else
				odd.push_back(tmp);
		}
		
		if (even.size() == odd.size())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}


