
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

int p[200005], sz[200005], point[200005], extra[200005];

int find (ll a){
    if (a == p[a]) return a;
    else return find(p[a]);
}

void merge(int a, int b){
    int ra = find(a);
    int rb = find(b);

    if (ra != rb){
        if (sz[a] > sz[b]){
            extra[rb] = point[ra];
            p[rb] = ra;
            sz[ra] += sz[rb];
        } else {
            extra[ra] = point[rb];
            p[ra] = rb;
            sz[rb] += sz[ra];
        }
    }
}

int get(int a){
    int amt = point[a];
    if (p[a] == a) {
        return amt;
    }
    amt += get(p[a]) - extra[a];
    return amt;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int n, m;

    cin >> n >> m;

    fore (i,0,n+1){
        p[i] = i;
        sz[i] = 1;
    }

    string s;
    int a, b, tmp, ra;
    while (m--){
        cin >> s;
        if (s == "add"){
            cin >> a >> b;
            ra = find(a);

            point[ra] += b;
        } else if (s == "get"){
            cin >> a;
            cout << get(a) << nl;
        } else {
            cin >> a >> b;
            merge(a, b);
        }
    }
}