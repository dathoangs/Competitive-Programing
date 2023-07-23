#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
struct sach {
	int maS, soL;
	string tenS;
	float donG, thanhT;
	
	sach(int i, int j, string s, float x){
		maS = i;
		soL = j;
		tenS = s;
		donG = x;
		thanhT = j*x;
	}
};

vector <sach> a;

void nhap (vector <sach> a){
	int i = a.size()+1;
	int j;
	string s;
	float x;
	cout << "Ten sach: ";
	cin >> s;
	cout << "So luong: ";
	cin >> j;
	cout << "Don gia: ";
	cin >> x;
	cout << "\n";	
	a.push_back(sach(i, j, s, x));
}

void nhapn (vector <sach> a){
	int t;
	cout << "So sach muon nhap: ";
	cin >> t;
	
	while (t--){
		nhap(a);
	}
}

//void xuat (int a, int i){
//	cout << a.maS
//}


int main() {

	nhapn(a);

	cout << a.size();
}















