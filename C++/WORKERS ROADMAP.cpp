#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m, res=0,l,r;
    cin >> n >> m;
    vector<pair<ll,ll>> a(n);
    for(auto &i:a){
        cin >> i.ff >> i.ss;
        i.ss++;
    }
    l = 1;
    r = 1e16;
    sort(a.begin(),a.end()) ;
    while(l<=r){
        ll mid = (l+r)/2;
        ll sp = 0, tmp=0;

        for(auto i:a){
            tmp = mid*i.ff - (mid/i.ss)*i.ff;
            sp+=tmp;
        }
        if(sp>=m){
            res=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout << res;
    return 0;
}

2 1 
