#include <bits/stdc++.h>
using namespace std;
int res;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	srand(time(NULL)); 
	res = rand() % (2 - 1 + 1) + 1;
	
	if (res % 2 == 0)
		cout << "ys 20 gg";
	else 
		cout << "ys 15 gg";
}


