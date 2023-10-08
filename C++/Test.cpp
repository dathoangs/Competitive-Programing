#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin >> k;
	int ar[10000];
	for(int i = 0 ; i < k ; i++){
		int a,b,c;
		cin >> a >> b >> c;
		int dem = 0;
		while(abs(a-b) > c){
			dem++;
			if(a > b){
				a -= c;
				b += c;
			}else if(b > a){
				b -= c;
				a += c;
			}
		}
		if(abs(a-b) > 0){
			dem++;
		}
		ar[i] = dem;
	}
	for(int i = 0 ; i < k ; i++){
		cout << ar[i] << endl;
	}
	return 0;
	

}
