#include <bits/stdc++.h>
using namespace std;
const int Max = 100000000;
vector <bool> ans(Max, true);
vector <int> iz;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	for (int i = 2; i*i<Max; i++){
		if (ans[i]){
			for (int j = i*i; j<Max; j += i)
				ans[j] = false;
		}
	}
	
	for (int i = 2; i<Max; i++){
		if (ans[i]) iz.push_back(i);
	}
	for (int i = 0; i<iz.size(); i+=100){
		cout << iz[i] << "\n";
	}
}


