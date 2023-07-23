#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define NO "NO\n"
#define YES "YES\n"
using namespace std;

int main() {
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m;
    string a, b;

    cin >> n >> m;

    map <string, string> dict;
    map <string, bool> first;

    fore(i,0,m){
        cin >> a >> b;
        dict[a] = b;
        dict[b] = a;
        first[a] = true;
    }

    fore(i,0,n){
        cin >> a;

        if (dict[a].length() < a.length()){
            cout << dict[a] << " ";
        } else if (dict[a].length() == a.length()){
            if (first[a]){
                cout << a << " ";
            } else {
                cout << dict[a] << " ";
            }
        } else {
            cout << a << " ";
        }

    }



    cout << endln;
    return 0;
}
