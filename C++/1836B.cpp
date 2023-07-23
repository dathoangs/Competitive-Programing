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
        ll n, k, g, tmp;

        cin >> n >> k >> g;

        // Giải thích tư tưởng
        /*
            (g-1)/2 * n | Phát '(g-1)/2' đồng cho 'n' người để quịt nhiều nhất có thể
            Cứ một lượng '(g-1)/2' đồng nhất định được chia thì sẽ tích kiệm được lượng đồng vàng tương ứng
            VD: 3 người - tích kiệm 1; 5 - 2; 7 - 3; 9 - 4;.... Tuy chưa nháp ra tại sao :v Nhưng nó có quy luật
            Từ đó lấy số đồng vàng dự kiến tích kiệm được so sánh với số đồng vàng mình có
            Không thể tích kiệm nhiều hơn số mình có được :v
            Nên cái bé hơn sẽ là đáp án.
        */

        tmp = (g-1)/2 *n /g;
        
        cout << min(tmp, k) * g<< nl;
    }
}