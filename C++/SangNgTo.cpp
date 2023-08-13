#include <bits/stdc++.h>
using namespace std;
int a,b;
vector <int> x;

int main(){
	cin >> a >> b;
	x.resize(b+5);
	x[0] = x[1] = 1;
	for (int i=2;i*i<=b;i++)
	{
		if (x[i] != 1)
		{
			for (int j=i*i; j<=b; j+=i)
				x[j] = 1;
		}
	}
	for (int i=a; i<=b; i++)
	{
		if (x[i]==0)
			cout<<i<<" ";
	}
}
