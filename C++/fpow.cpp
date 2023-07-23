#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
ll fpow(ull a, ull b)
{
    ull res = 1;
    while(b)
    {
        if(b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
}


