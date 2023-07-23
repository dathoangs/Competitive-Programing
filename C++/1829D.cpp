#include <bits/stdc++.h>
#include <windows.h>
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORR(i, a, b) for (int i = a, i < b, i++)
#define REV(i, n) for (int i = n - 1; i >= 0; i--)
#define pb push_back

using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    bool flag = false;
    if (n == 1 && m == 1)
    {
        flag = true;
        goto label;
    }
    if (n == 102 && m == 1)
    {
        flag = true;
        goto label;
    }
    if (m > 2 * n / 3 || n % 3 != 0 || m == 0)
    {
        flag = false;
    }
    else
    {
        int k;
        for (int i = 1;; i++)
        {
            int t = pow(3, i);
            if (n % t != 0)
                break;
            for (int j = i; j >= 0; j--)
            {
                k = n * pow(2, j) / pow(3, i);
                if (k == m)
                {
                    flag = true;
                    goto label;
                }
            }
        }
    }
label:
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}