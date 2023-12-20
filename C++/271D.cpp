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

const int base = 911382323;
const ll maxn = 1000111;

ll POW[maxn], hashT[maxn];

ll getHashT(int i,int j) {
    return (hashT[j] - hashT[i - 1] * POW[j - i + 1]);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    string s, dict;
    ll k, lenT;
    cin >> s >> dict >> k;

    map <ll, bool> exists;

    s = " " + s;
    POW[0] = 1;
    lenT = s.length();
    // Precalculate base^i
    for (int i = 1; i < lenT; i++)
    	POW[i] = (POW[i - 1] * base);

    // Calculate hash value of T[1..i]
    for (int i = 1; i < lenT; i++)
    	hashT[i] = (hashT[i - 1] * base + s[i]);

    ll chk = 0, ans = 0;
    fore (i,1,lenT){
        chk = 0;
        fore (j,i,lenT){
            if (dict[s[j] - 'a'] == '0') chk++;

            if (chk > k) break;

            if (!exists[getHashT(i, j)]){
                exists[getHashT(i, j)] = true;
                ans++;
            }
        }
    }
    cout << ans;
}