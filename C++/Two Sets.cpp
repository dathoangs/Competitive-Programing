#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, aSum;

    cin >> n;

    aSum = ((1+n)*n)/2;

    if (aSum & 1){
        cout << "NO";
    } else {
        cout << "YES\n";
        ll pSum = 0, hSum = aSum/2, cnt = 1;
        vector <ll> a, b;

        while (pSum < hSum){
            pSum += cnt;
            a.pb(cnt);
            cnt++;
        }

        while (cnt <= n){
            b.pb(cnt);
            cnt++;
        }

        if (pSum != hSum){
            b.pb(a[pSum-hSum-1]);
            a.erase(a.begin() + (pSum-hSum-1));
        }

        cout << a.size() << "\n";
        for (ll i:a){
            cout << i << " ";
        }
        cout << "\n";
        
        cout << b.size() << "\n";
        for (ll i:b){
            cout << i << " ";
        }
        cout << "\n";        
    }
}