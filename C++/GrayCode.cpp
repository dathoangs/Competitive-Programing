#include <bits/stdc++.h>
using namespace std;
int n;
vector <string> a;
string temp;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n;
	
	a.push_back("0");
	a.push_back("1");

		
	for (int i = 1; i<n; i++)	
	{
		for (int tmp = a.size()-1; tmp>=0; tmp--)
		{
			a.push_back(a[tmp]);
		}

		for (int tmp = 0; tmp<a.size()/2; tmp++){
			a[tmp] = "0" + a[tmp];
		}
		for (int tmp = a.size()/2; tmp<a.size(); tmp++){
			a[tmp] = "1" + a[tmp];
		}
	}
	
	for (int i = 0; i<a.size(); i++){
		cout << a[i] << "\n";
	}
}


