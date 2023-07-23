#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t;

    cin >> t;

    while (t--){
        ll n; char d;
        bool chk = true;
        string num;

        cin >> n >> d >> num;

        ll pos = n, temp = INT_MAX;

        fore (i,0,n){  
            if (d == num[i]){
                pos = i;
            }

            if (d > num[i]){
                pos = i;
                break;
            }            

            if (d < num[i]){
                pos = i+1;
            }
        }

        string tmp{d};
        num.insert(pos, tmp);

        cout << num;

        cout << "\n";
    }   
}