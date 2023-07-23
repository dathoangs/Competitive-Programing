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
    freopen("input", "r", stdin);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    string s;
    ll h1 = 0, m1 = 0, h2 = 0, m2 = 0;

    cin >> s;

    h1 = (s[0] - '0') * 10 + (s[1] - '0');
    m1 = (s[3] - '0') * 10 + (s[4] - '0');

    cin >> s;

    h2 = (s[0] - '0') * 10 + (s[1] - '0');
    m2 = (s[3] - '0') * 10 + (s[4] - '0');\


    ll total = (h2*60 + m2) - (h1*60 + m1) / 2;

    m1 += total % 60;

    cout << total << endl;

    if (m1 >= 60){
        h1 += total / 60 + 1;
    } else {
        h1 += total /60;
    }





    cout << setw(2) << setfill('0') << h1 << ":" << setw(2) << setfill('0') << m1;


    cout << endln;
    return 0;
}

