#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector <int> pre;
vector <int> high;
vector <int> low;
int swp, iter, n, m;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n >> m;
	
	for (int i = 0; i<n; i++){
		pre.push_back(i);
		high.push_back(i);
		low.push_back(i);
	}

	for (int i = 0; i<m; i++){
		cin >> swp;
		vector<__int32>::iterator iter = find(pre.begin(), pre.end(), swp);
		int tmp = iter - pre.begin();
		if (tmp != 0){
			swap(pre[tmp], pre[tmp-1]);
			if (high[pre[tmp]] > tmp)
				high[pre[tmp]] = tmp;
			if (low[pre[tmp]] < tmp)
				low[pre[tmp]] = tmp;
			
			if (low[pre[tmp-1]] < tmp-1)
				low[pre[tmp-1]] = tmp-1;
			if (high[pre[tmp-1]] > tmp-1)
				high[pre[tmp-1]] = tmp-1;				
				
		}
	}
	
	for (int i = 0; i<n; i++){
		cout << high[i] + 1 << " " << low[i] + 1 << "\n";
	}
	
	
}
























