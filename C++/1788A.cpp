#include <bits/stdc++.h>

using namespace std;

int main() {


    int t;

    cin >> t;

    while (t--){
        int n, cnt = 0;

        cin >> n;

        int a[n];

        for (int i = 0; i<n; i++){
            cin >> a[i];
            if (a[i] == 2){
                cnt++;
            }
        }

        if (cnt%2 != 0){
            cout << -1 << "\n";
        } else {
            if (cnt == 0){
                cout << 1 << "\n";
            } else {
                int ans = 0;
                for (int i = 0; i<n; i++){
                    if (a[i] == 2){
                        ans++;
                    }
                    if (ans*2 == cnt){
                        cout << i+1 << "\n";
                        break;
                    }
                }
            }

        }


    }

    return 0;
}


