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
const ll MAXN= 200005;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pll> vll;
typedef vector<pii> vii;
typedef vector<string> vs;
const ll mod= 1e9+7;

#define down '\n' 
#define yes cout<<"YES" << down
#define no  cout<<"NO" << down 
#define minpq(s) priority_queue<int, vector<int>, greater<int>> = s;
#define sz(s) (int)s.size()

// __gcd(n,0) = n;
#define see(x) cout << #x << " = " << x << ' '
#define seen(x) cout << #x << " = " << x << '\n'

const int modhash = 998244353;
const ll MULTI_TESTS = 0;



   // here


         void unstoppable()
      {
   
        
            ll n,m,d;
            cin >> n >> m >> d ;
            vector<string> a(n) ;
            map<string,ll> mp ;
            fore(i,0,n)
            {
               string tmp ="" ;
               fore(j,0,d+1)
               {
                  ll c = 0;
                  cin >> c;
                  tmp += to_string(c) + "+";
               }
                  mp[tmp] ++ ;
            }
            while(m--)
            {

               string tmp ="" ;
               fore(j,0,d+1)
               {
                  ll c;
                  cin >> c;
                  tmp += to_string(c) + "+";
               }
                  mp[tmp] ++ ;

               if(mp[tmp] == 1)
                  cout <<"GOOD";
               else
                  cout << "BAD";
               cout << down;
            }

     
       

         
      }



   // main

      signed main()
{
          std::ios::sync_with_stdio(false);
          cin.tie(nullptr);
        // cout << down;

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