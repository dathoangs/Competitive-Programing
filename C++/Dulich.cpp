#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
int sum1,sum2,sum;

int main(){
	cin>>n;
	cin>>m;
	cin>>a;
	cin>>b;
	if (n > m || n == m) {
		sum1 = (n/m)*b;
	}
	else {
		sum1 = (ceil((double)n/(double)m) * b);
	}
	
	sum2 = ceil((double)n*(double)a);
	
	if (sum1<sum2) {
		sum = sum1;
		int dl = sum / b;
		if (n > m) {
			n -= dl * m;
			sum += n * a;
		}
	} 
	
	else 
		sum = (int)sum2;

	cout << sum;	
}
