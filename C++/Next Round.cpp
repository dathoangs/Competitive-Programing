#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll n, k, tmp;
	vector <ll> a;
	cin >> n >> k;
	k--;

	while (n--){
		cin >> tmp;
		a.pb(tmp);
	}	

	tmp = a[k];
	sort(rall(a));

	ll right = a.size() - 1, mid = right/2;

	while ((a[mid] < tmp || a[mid] <= 0) && mid > 0){
		right = mid-1;
		mid = right/2;
	}

	while (a[mid+1] >= tmp && mid+1 < a.size() && a[mid+1] > 0){
		mid++;
	}

	if (a[mid] <= 0){
		cout << mid;
	} else {
		cout << mid + 1;
	}
}