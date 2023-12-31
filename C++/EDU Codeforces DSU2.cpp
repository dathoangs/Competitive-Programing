#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

ll p[300007];
ll MAX[300007], MIN[300007], sz[300007];

ll find(ll a){
    if (a == p[a]) return a;
    else return p[a] = find(p[a]);
}

void merge (ll a, ll b){
    ll ra = find(a);
    ll rb = find(b);

    if (ra != rb){
        if (sz[ra] > sz[rb]){
            p[rb] = ra;
            if (MAX[rb] > MAX[ra]) MAX[ra] = MAX[rb];
            if (MIN[rb] < MIN[ra]) MIN[ra] = MIN[rb];
            sz[ra] += sz[rb];
        } else {
            p[ra] = rb;
            if (MAX[rb] < MAX[ra]) MAX[rb] = MAX[ra];
            if (MIN[rb] > MIN[ra]) MIN[rb] = MIN[ra];     
            sz[rb] += sz[ra];       
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m;
    cin >> n >> m;

    fore (i,0,n+1){
        p[i] = i;
        MAX[i] = i;
        MIN[i] = i;
        sz[i] = 1;
    }

    string s;
    ll a, b;
    fore (i,0,m){
        cin >> s;

        if (s == "union"){
            cin >> a >> b;

            merge(a, b);
        } else {
            cin >> a;

            b = find(a);

            cout << MIN[b] << " " << MAX[b] << " " << sz[b] << nl;
        }
    }
}