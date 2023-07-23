#include <bits/stdc++.h>
using namespace std;
int t,n,m;
vector <int> a;
int l, mid, r;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt < t; tt++) {
		cin >> n;
		cin >> m;
		a.resize(n);
		
		for (int nn = 0; nn < n; nn++) 
			cin >> a[nn];
		
		sort(a.begin(), a.end());
		
		
		for (int i = 0; i<a.size(); i++){
			l = 0; r = a.size() - 1;
			while (l != r){
				mid = (l+r)/2;
				if (a[i] + a[mid] < m)
					l = mid+1;
				
				if (a[i] + a[mid] > m)
					r = mid-1;
					
				if (a[i] + a[mid] > m)
			}
		}

			
				
		
	}
}


