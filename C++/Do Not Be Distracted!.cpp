#include <bits/stdc++.h>
using namespace std;
int t,n;
vector <string> a;
map <string, int> chk;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cin >> a[0];
		for (int j = 1; j < n; j++) {
			cin >> a[j];
			while (a[j] == a[j+1])
			{
				j++;
				cin >> a[j];
			}
			chk[a[j-1]] += 1;	
			
		}
	}
}
