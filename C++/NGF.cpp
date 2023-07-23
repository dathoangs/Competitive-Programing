#include <bits/stdc++.h>
using namespace std;
int t, n, chk;
vector <int> a;
vector <int> stck;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> n;
		a.resize(n+10);
		stck.resize(n+10);
		
		for (int nn = 0; nn<n; nn++){
			cin >> a[nn];
			stck[a[nn]]++;
		}
		
//		for (int i = 0; i<n; i++){
//			cout << a[i] << " - " << stck[a[i]];
//			stck[a[i]]--;
//			cout << "\n";
//		}

		for (int nn = 0; nn<n; nn++){
			chk = 0; 
			
			for (int i = nn+1; i<n; i++){
				cout << a[nn] <<"\n";
				if (stck[a[nn]] < stck[a[i]]){
					cout << a[i] << " ";
					chk++;
					break;
				}
			}
			
			stck[a[nn]]--;
			
			if (chk != 0){
				cout << "-1 ";
			}
		}
		cout << "\n";
	}

	
}


