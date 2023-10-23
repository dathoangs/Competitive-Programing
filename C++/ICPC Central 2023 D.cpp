/**
  * Create: Sunday 2023-10-22-09.10.34 GMT+7
  * Title : D
  * Author:
**/

#include <bits/stdc++.h>

using namespace std;

template <typename T>                           ostream& operator << (ostream& os, const stack                 <T>         &stack_)                  {os <<   "[";     int n = (int) stack_.size();      vector <T> archive (n);    stack <T>                              stackCopy_ (stack_);   for (int i=0; i<n; ++i) {archive[stackCopy_.size()-1]=stackCopy_.top();       stackCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const queue                 <T>         &queue_)                  {os << "->[";     int n = (int) queue_.size();      vector <T> archive (n);    queue <T>                              queueCopy_ (queue_);   for (int i=0; i<n; ++i) {archive[queueCopy_.size()-1]=queueCopy_ .front();    queueCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const priority_queue        <T,vector<T>,greater<T>>&Queue_)      {os <<   "[";     int n = (int) Queue_.size();      vector <T> archive (n);    priority_queue<T,vector<T>,greater<T>> QueueCopy_ (Queue_);   for (int i=0; i<n; ++i) {archive[QueueCopy_.size()-1]=QueueCopy_.top();       QueueCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const priority_queue        <T>         &Queue_)                  {os <<   "[";     int n = (int) Queue_.size();      vector <T> archive (n);    priority_queue<T>                      QueueCopy_ (Queue_);   for (int i=0; i<n; ++i) {archive[QueueCopy_.size()-1]=QueueCopy_.top();       QueueCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const vector                <T>         &vector_)                 {os <<   "[";     if (!vector_  .empty())           {for (auto it = vector_  .begin(), i=0; i< (int) vector_   .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (vector_   .rbegin());}     os << "]";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const deque                 <T>         &deque_)                  {os <<   "[";     if (!deque_   .empty())           {for (auto it = deque_   .begin(), i=0; i< (int) deque_    .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (deque_    .rbegin());}     os << "]";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const set                   <T>         &set_)                    {os <<   "[";     if (!set_     .empty())           {for (auto it = set_     .begin(), i=0; i< (int) set_      .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (set_      .rbegin());}     os << "]";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const multiset              <T>         &multiSet_)               {os <<   "[";     if (!multiSet_.empty())           {for (auto it = multiSet_.begin(), i=0; i< (int) multiSet_ .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (multiSet_ .rbegin());}     os << "]";     return os;}
template <typename T1, typename T2>             ostream& operator << (ostream& os, const map                   <T1, T2>    &map_)                    {os <<   "[";     if (!map_     .empty())           {for (auto it = map_     .begin(), i=0; i< (int) map_      .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (map_      .rbegin());}     os << "]";     return os;}
template <typename T1, typename T2>             ostream& operator << (ostream& os, const multimap              <T1, T2>    &multiMap_)               {os <<   "[";     if (!multiMap_.empty())           {for (auto it = multiMap_.begin(), i=0; i< (int) multiMap_ .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (multiMap_ .rbegin());}     os << "]";     return os;}
template <typename T1, typename T2>             ostream& operator << (ostream& os, const pair                  <T1, T2>    &pair_)                   {os <<   "{";                                                                                                                                {os <<pair_.first;     os <<":";   os <<pair_.second;}     os << "}";     return os;}
template <typename T>                           void     quick_debug (ostream& os, const char *name,           const T     &value)                   {os <<"[DEBUG]"   << name <<" = " <<value <<endl;};
template <typename T1, typename... Args>        void     quick_debug (ostream& os, const char *name,           const T1    &value, Args&&... args)   {os <<"[DEBUG]";  while (*name != ',')    {os << *name++;}     os << " = " << value << endl;    quick_debug (os, name + 1, args...);};

#define time cout << "\nTime: " << clock() / double(1000) << " sec"
#define  hien(...)                              quick_debug(cerr, " " #__VA_ARGS__, __VA_ARGS__)
#define  endl                                   '\n'

int main() {
    ios_base::sync_with_stdio (0); cin.tie (0);

    int n; cin >> n;
    int m; cin >> m;
    int k; cin >> k;

    vector<string> a(n);

    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }

    int cnt=0;
    int d=0;

    for (int i=0; i<n; ++i) {
        int ok=0;
        for (int j=0; j<m; ++j) {
            if (a[i][j] == 'x') {
                cnt++;
                ok = 1;
            }
        }
        if (ok==1) d++;
    }

    if (cnt<=k){
        cout << "0\n";
    } else {
        if (d>k) {
            cout << "-1\n";
        } else {
            int l=1;
            int r=1e9;
            int ans = 1e9;
            int ok = 0;
            while (r > l) {
                int mid = (l+r)/2;
                int d2 = 0;
                for (int i=0; i<n; ++i) {
                    for (int j=0; j<m; ++j) {
                        if (a[i][j]=='x'){
                            int d1=0;
                            for (int it=j+1; it<m; ++it) {
                                if (a[i][it]=='#') {
                                    j = it;
                                    break;
                                }
                                d1++;
                                if (d1==mid*2) {
                                    j = it;
                                    break;
                                }
                                if (it==m-1) {
                                    j = it;
                                    break;
                                }
                            }
                            d2++;
                        }
                    }
                }
                if (d2<=k) {
                    ok = 1;
                    ans = min(mid, ans);
                }

                if (d2>k) {
                    l = mid;
                } else {
                    r = mid-1;
                }
            }

            if (ok) cout << ans;
            else cout << "-1\n";
        }
    }


/**

4 6 5
#x..#.
#.x.x#
..#.xx
x....x


2 3 10
xxx
xxx

2 2 1
x.
x.


**/





   return 0;
}
