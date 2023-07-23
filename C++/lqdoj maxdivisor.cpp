#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;
int pre[100000000];
vector <int> prime;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    pre[0] = pre[1] = 1;
	for (int i=2;i*i<=10000000;i++)
	{
		if (pre[i]!=1)
		{
            prime.pb(i);
			for (int j=i*i;j<=10000000;j+=i)
				pre[j]=1;
		}
	}    

    ll t;

    cin >> t;

    while (t--){
        ll n;

        cin >> n;

        if (n < 10000000 || pre[n] != 1){
            cout << -1 << "\n";
        } else {
            ll i = 0;

            while (n%prime[i] != 0){
                i++;
            }

            cout << n/prime[i] << "\n";
        }
    }

}