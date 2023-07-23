#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, x, y, d;
	cin >> n;

	vector <pair<int, int>> xty(n+2);
	vector <pair<int, int>> ytx(n+2);
	set <pair<int, int>> visit;

	xty[0] = {-INT_MAX, -INT_MAX};
	xty[n+1] = {INT_MAX, INT_MAX};

	ytx[0] = {-INT_MAX, -INT_MAX};
	ytx[n+1] = {INT_MAX, INT_MAX};

	fore (i,1,n+1){
		cin >> x >> y;

		xty[i] = {x, y};

		ytx[i] = {y, x};
	}

	sort(all(xty));
	sort(all(ytx));

	x = 0; y = 0; d = 0;

	int lf, rt, md, ans = 0;

	pair<int, int> pos, pm = {INT_MAX, INT_MAX};

	auto next_p = [&](){
		lf = 0;
		rt = n+1;
		switch (d){
			case 0:{
				while (rt-lf > 1){
					md = (lf+rt) / 2;
					if (sty[md].first < y || )
				}
			}

			case 1:{
				while(rt-lf > 1){
					md = (lf+rt) / 2;
					if (stx[md].first > x || (stx[md].first == x && stx[md].seccond > y))
						rt = md;
					else
						lf = md;
				}
				if(stx[lf].first != x) return pm;
				else return stx[lf];
			}

			case 2:{
				while(rt-lf > 1){
					md = (lf+rt) / 2;
					if(stx[md].first < x || 
						(stx[md].first == x && sty[md].seccond < y)) lf = md;

					else rt = md;
				}
				if (stx[rt].first != x) return
			}


		}
	}



	cout << endln;
	return 0;	
}