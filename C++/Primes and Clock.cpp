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
void filter(int &i, int post, string &s){
	if (i == 3 || i == 4 || i == 7){
		s.clear(s.begin()+post);
	}

	if (i == 6){
		s[post] == '9';
	}

	if (i == 9){
		s[post] == '6';
	}

}
vector <ll,int> x(10e17);

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);


	x[0] = x[1] = 1;
	for (ll i=2;i*i<=10e17;i++)
	{
		if (x[i]!=1)
		{
			for (int j=i*i;j<=10e17;j+=i)
				x[j]=1;
		}
	}

	ll t;

	cin >> t;
	while (t--){
		string s;
		cin >> s;

		reverse(all(s));

		for (int i = 0; i<s.length(); i++){
			filter((int)s[i], i, s)
		}

		if (x[stoi(s)] == 0){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}

	}

	cout << endln;
	return 0;	
}