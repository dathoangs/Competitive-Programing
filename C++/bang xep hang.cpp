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

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
	if (a.second == b.second){
		return a.first < b.first;
	}
    return (a.second > b.second);
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll n, tmp;

	vector <pair<ll,ll>> a;
	vector <ll> tmp1;
	vector <ll> tmp2;


	cin >> n;

	fore(i,0,n){
		cin >> tmp;
		tmp1.pb(tmp);
	}

	fore(i,0,n){
		cin >> tmp;
		tmp2.pb(tmp);
	}

	fore(i,0,n){
		a.pb(make_pair(tmp1[i], tmp2[i]));
	}	

	sort(all(a), sortbysec);

	fore(i,0,n){
		cout << a[i].first << " ";
	}
	
}