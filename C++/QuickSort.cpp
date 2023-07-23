#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int a[6] = {9,8,7,6,5,4};
void QuickSort(int a[], int l, int r){
	int i, j, x;
	x = a[(l+r) / 2];
	i = l; j = r;
	while (a[i] < x)
		i++;
	while (a[j] < x ){
		swap(a[i], a[j]);
		j--;
	}
	cout << x << "\n";	
	if (i >= (l+r) / 2)
		QuickSort(a, l, i);
	if (j <= (l+r) / 2)
		QuickSort(a, j, r);
}


int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	QuickSort(a, 0, 5);
	for (int i = 0; i<6; i++){
		cout << a[i] << " ";
	}
}


