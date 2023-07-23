#include <bits/stdc++.h>
using namespace std;
int n, i, j, type, q, tmp, tmp1;
string s;
vector <int> a;
vector <unsigned long long int> fw;
	
unsigned long long int get(int id){
    unsigned long long int res = 0;
    while(id){
        res+=fw[id];
        id-=(id&-id);
    }
    return res;
}

void upd(int id,int val){
	tmp = val - a[id];
	a[id] = val;
    while(id <= n){
        fw[id] += tmp;
        id+=(id&-id);
    }
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> s;
	a.resize(s.length() + 7)
	for (int i = 0; i<s.length(); i++){
		a[i] = int (s[i]);
	}
	cin >> q;
	fw.resize(n+10, 0);
	for (int nn = 1; nn<=n; nn++){
		for (int i = 1; i<=(nn&-nn); i++){
			fw[nn] += a[nn-i+1];
		}
	}
	
	for (int qq = 0; qq<q; qq++){
		cin >> type;
		cin >> i;
		cin >> j;
		
		if (type == 1){
			upd(i, j);
		}
	}
}
