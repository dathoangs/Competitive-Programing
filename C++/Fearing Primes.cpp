#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

#define MAX 1000000
bool prime[MAX];

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    fore(i,2,MAX){
        if (!prime[i]){
            ll j = 2;
            while (i*j <= MAX){
                prime[i*j] = true;
                j++;
            }
        }
    }

    ll t;

    cin >> t;

    while (t--){
        ll n;

        cin >> n;

        while (n/10){
            
        }
    }
}