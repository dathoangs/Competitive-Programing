#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

// Tìm kiếm phần tử được nhập vào
long long binary_search(vector<long long> a, int b){
    sort(a.begin(), a.end());

    for (auto i:a){
        cout << i << " ";
    }

    cout << endl;

    int l, r;
    l = 0; r = a.size();


    while(l != r){
        int mid = (r+l)/2;
        cout << l << " " << r << " " << mid << endl;
        if(a[mid] == b){
            return mid;
        }

        if (a[mid] > b){
            r = mid - 1;
        }

        if (a[mid] < b){
            l = mid+1;
        }
    }

    return -1;
}

int main() {
    vector<long long> a = {9};
    
    ll n; cin >> n;

    cout << binary_search(a, n);
}   