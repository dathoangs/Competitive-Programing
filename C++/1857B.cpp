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

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        string x;
        cin >> x;

        ll n = x.length(), pos = 0;

        if (x[0] >= '5'){
            x[0] = '0';
            x.insert(0,"1");  
            n++;
            pos = 1;          
        } else {
            fore (i,1,n){
                if (x[i] == '4'){
                    ll tmp = i;
                    
                    while (x[i] == '4'){
                        i++;
                        if (x[i] >= '5'){
                            x[tmp] = '5';
                            i = tmp;
                            break;
                        }
                    }
                } 

                if (x[i] >= '5'){
                    x[i-1]++;
                    pos = i;
                    break;
                }
            }
        }

        if (pos == 0) pos = n;

        fore (i,pos,n){
            x[i] = '0';         
        }        

        if (x[0] >= '5'){
            x[0] = '0';
            x.insert(0,"1");  
            n++;
            pos = 1;          
        }

        cout << x << nl;
    }
}