#include <bits/stdc++.h>
using namespace std;
int n, i, j, type, q;
vector <int> a;
vector <int> fw;
	
int get(int id){
    int res = 0;
    while(id){
        res+=fw[id];
        id-=(id&-id);
    }
    return res;
}

void upd(int id,int val){
    while(id <= n){
        fw[id]+=val;
        id+=(id&-id);
    }
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n;
	a.resize(n+10, 0);
	fw.resize(n+10, 0);
	for (int nn = 1; nn<=n; nn++){
		cin >> a[nn];
	}
	for (int nn = 1; nn<=n; nn++){
		for (int i = 1; i<=(nn&-nn); i++){
			fw[nn] += a[nn-i+1];
		}
	}
	
	cin >> q;
	for (int qq = 0; qq<q; qq++){
		cin >> type;
		cin >> i;
		cin >> j;
		if (type == 1){
			cout << get(j) - get(i-1) << "\n";
		}
		
		if (type == 0){
			upd(i, j);
		}
	}
}
