#include<bits/stdc++.h>
using namespace std;
unsigned long long int x, y;

int main(){
    ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> x;
	cin >> y;
    
    cout << x / __gcd(x,y) * y;
    
}
