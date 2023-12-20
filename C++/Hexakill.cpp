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

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	string s1, s2;

	cin >> s1 >> s2;

	std::transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c){ return std::toupper(c); });
	std::transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c){ return std::toupper(c); });

	
}

// 1. Tính tích các số từ X đến Y kể cả X và Y. 
// 2. Tính S = tổng các chữ số trong kết quả nhận được. 
// 3. Chừng nào S chưa nhỏ hơn B thì thực hiện lại việc tính tổng các chữ số của S. 
// 4. Đưa ra S.