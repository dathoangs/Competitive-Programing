//                   		 _
//                        _ooOoo_
//                       o8888888o
//                       88" . "88
//                       (| -_- |)
//                       O\  =  /O
//                    ____/`---'\____
//                  .'  \\|     |//  `.
//                 /  \\|||  :  |||//  \
//                /  _||||| -:- |||||_  \
//                |   | \\\  -  /'| |   |
//                | \_|  `\`---'//  |_/ |
//                \  .-\__ `-. -'__/-.  /
//              ___`. .'  /--.--\  `. .'___
//           ."" '<  `.___\_<|>_/___.' _> \"".
//          | | :  `- \`. ;`. _/; .'/ /  .' ; |
//          \  \ `-.   \_\_`. _.'_/_/  -' _.' /
//===========`-.`___`-.__\ \___  /__.-'_.'_.-'================
//      Khong Bug         `=--=-'          Khong Bug        
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, m;
vector <int> ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	cin >> n >> m;
	int pre[n+1][n+1];
	int x, y;
	
	for (int i = 0; i<m; i++){
		cin >> x >> y;
		pre[x][y] = abs(x-y);
	}
	
	for (int i = 1; i<=n)
}
























