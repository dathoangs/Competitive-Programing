#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (int i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (int i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
#define prec(n) fixed<<setprecision(n)
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100015;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pll> vll;
typedef vector<pii> vii;
typedef vector<string> vs;
const ll mod= 1e9+7;
#define out(x) cout << x
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minpq(s) priority_queue<int, vector<int>, greater<int>> = s;
#define bit(i,j) ((i>>j) & 1)
// __gcd(n,0) = n;
#define see(x) cout << #x << " = " << x << ' '
#define seen(x) cout << #x << " = " << x << '\n'
#define int long long
const ll MULTI_TESTS = 0;
const int G = 1e5+15 ;
vector<bool> used(G,false) ;
struct DSU
{
    vector<int> x;
    vector<int> sz;

    DSU(int n)
    {
        x = vector<int> (n);
        sz = vector<int> (n);

        for(int i=0; i<n; i++)
            x[i] = i,sz[i]=1;
    }
    // int size(int A)
    // {
    // return -x[find(A)];
    // }
    int size(int A)
    {
        return sz[find(A)];
    }
    int find(int u)
    {
        if (x[u]==u) return u;
        return x[u] = find(x[u]);
    }
    void join(int a,int b)
    {
        int ra = find(a);
        int rb = find(b);
        if(ra == rb) return ;
        if(sz[ra] <sz[rb])
            swap(ra,rb);
        x[rb] = ra;
        sz[ra] +=sz[rb];
    }
    bool same(int A, int B)
    {
        return find(A) == find(B);
    }
};



void unstoppable()
{

    int n, k;
    cin >> n >> k;
    DSU dsu(G);
    while(k--)
    {

        int u,v;
        cin >> u>>v;
        if(!dsu.same(u,v) )
        {
            dsu.join(u,v) ;

        }
    }
    vl res ;
    fore(i,0,n)
    {
        if(!dsu.same(i,i+1) && used[dsu.find(i)] == false )
        {
            used[dsu.find(i)] = true ;
            if(dsu.size(i) > 2 )
                res.push_back(dsu.size(i)) ;
        }
    }

    ll ans = 0;
    //res = ((res%mod)*(i%mod))%mod.
    for(auto i : res)
    {
        int64_t rr= 1;
          for(int j=1; j<=i; ++j)
            {
                rr = ((rr%mod)*(j%mod))%mod;
            }
            ans+=rr;
        
    }
    cout << ans ;
    // hrerererf

}





// main

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (MULTI_TESTS)
    {
        ll Q;
        cin >> Q;
        while (Q--)
        {
            unstoppable();
        }
    }
    else
    {
        unstoppable();
    }
    return 0;
}
