#include <bits/stdc++.h>
#define ff first
#define ss second
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(a) a.begin(),a.end()
#define setp(x) fixed << setprecision(x)

using namespace std;

typedef complex<long double> cd;
namespace input {
	template<class T> void re(complex<T>& x);
	template<class T1, class T2> void re(pair<T1,T2>& p);
	template<class T> void re(vector<T>& a);
	template<class T, size_t SZ> void re(array<T,SZ>& a);

	template<class T> void re(T& x) { cin >> x; }
	void re(double& x) { string t; re(t); x = stod(t); }
	void re(long double& x) { string t; re(t); x = stold(t); }
	template<class Arg, class... Args> void re(Arg& first, Args&... rest) {
		re(first); re(rest...);
	}

	template<class T> void re(complex<T>& x) { T a,b; re(a,b); x = cd(a,b); }
	template<class T1, class T2> void re(pair<T1,T2>& p) { re(p.ff,p.ss); }
	template<class T> void re(vector<T>& a) {
		for(auto &i:a)re(i);
	}
	template<class T, size_t SZ> void re(array<T,SZ>& a) {
		for(int i=0;i<SZ;++i) re(a[i]);
	}
}

using namespace input;
using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;

namespace io
{
	void setIn(string s) { ifstream cin (s);}
	void setOut(string s) {ofstream cout (s);}
	void setIO(string s = "")
	{
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin.exceptions(cin.failbit);
		if (sz(s)) setIn(s+".inp"), setOut(s+".out");
	}
}
using namespace io;

constexpr int mod = 1e9+7;

typedef struct Per{
	int cc;
	char gt;
	string an, db;
}per;

void inp(per &x){
	cin >> x.cc >> x.gt >> x.an >> x.db;
}

int maxm = 0, maxf = 0, chk;
vector <per> ans;
vector <per> load;

int main()
{
	setIO();
	srand(time(NULL));
	int n, res=0;
	cin >> n;
	vector<per> a(n);
	for(int i=0;i<n;++i) inp(a[i]);
	for (int i = 0; i<a.size(); i++){
		if (a[i].gt == 'M') maxm++;
		else maxf++;
	}
	
	if (maxm >= maxf){
		for (int i = 0; i<a.size(); i++){
			if (a[i].gt == 'M') ans.push_back(a[i]);
			else load.push_back(a[i]);
		}
	} else {
		for (int i = 0; i<a.size(); i++){
			if (a[i].gt == 'F') ans.push_back(a[i]);
			else load.push_back(a[i]);
		}
	}
	a.clear();
	for (int i = 0; i<load.size(); i++){
		chk = 0;
		for (int j = 0; j<ans.size(); j++){
			if(abs(load[i].cc - ans[j].cc) > 40 || (load[i].gt == ans[j].gt) || (load[i].an!=ans[j].an) || (load[i].db==ans[j].db)){
				chk++;
			}
			if (chk == ans.size()) ans.push_back(load[i]);
		}
	}
	
	cout << ans.size();
	return 0;
}












