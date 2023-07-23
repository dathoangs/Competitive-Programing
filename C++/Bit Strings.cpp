#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;
ll fpow(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b & 1){
            res = (res*a) % 1000000007;
        }
        a = a*a % 1000000007;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n;
    ull ans = 1;

    cin >> n;

    cout << fpow(2,n);
}