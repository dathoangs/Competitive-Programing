#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

int movX[4] = {0, 0, 1, -1};
int movY[4] = {1, -1, 0, 0};

ll n, m;
bool visited[1000][1000];
string s[1000];

bool bfs(ll x, ll y){
    if (s[x][y] != '.' || visited[x][y]) return false;
    
    queue<pair<ll, ll>> q;
    q.push({x, y});
    visited[x][y] = true;
    
    while (!q.empty()){
        fore(i,0,4){
            x = q.front().first;
            y = q.front().second;       

            x += movX[i]; if (x < 0 || x >= n) continue;
            y += movY[i]; if (y < 0 || y >= m) continue;

            if (!visited[x][y] && s[x][y] == '.'){
                q.push({x, y}); 
                visited[x][y] = true;                
            }          
        }  
        q.pop();
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin >> n >> m;

    fore (i,0,n) cin >> s[i];

    ll ans = 0;
    fore (i,0,n){
        fore (j,0,m){
            if (bfs(i, j)) ans++;
        }
    }

    cout << ans;
}