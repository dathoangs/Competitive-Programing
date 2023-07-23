#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;
vector <bool> x;

int main(){
	x.resize(1000007);
	x[0] = x[1] = 1;
	for (int i=2;i*i<=1000000;i++)
	{
		if (x[i]!=1)
		{
			for (int j=i*i;j<=1000000;j+=i)
				x[j]=1;
		}
	}

	int n, tmp, ans = 0;
	cin >> n;

	while (n--){
		cin >> tmp;
		if (x[tmp] == 0){
			ans++;
		}
	}

	cout << ans;
}