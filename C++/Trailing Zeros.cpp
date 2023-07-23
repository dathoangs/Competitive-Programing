#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

int log(long long x)
{
    return 64 - __builtin_clzll(x) - 1;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    ll n, ans = 0;

    cin >> n;

    while(n>=5){
        ans += n/5; 
        n/=5;  
    } 

    cout << ans;
}