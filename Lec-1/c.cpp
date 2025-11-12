#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define double         long double
#define F              first          
#define S              second         
#define pb             push_back
#define lb             lower_bound
#define ub             upper_bound
#define si             set <int>
#define vi             vector <int>
#define vvi            vector <vi>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define mii            map <int, int>
#define sz(v)          ((int) v.size())
#define all(v)         v.begin(), v.end()
#define rall(v)        v.rbegin(), v.rend()
#define vsum(v)        accumulate(v.begin(), v.end(), 0LL)
#define vmax(v)        *max_element(v.begin(), v.end())
#define vmin(v)        *min_element(v.begin(), v.end())
#define form(i, a, b)  for (int i=a; i<(b); i++)
#define forn(i, a)     for (int i=0; i<(a); i++)
#define que_dec        priority_queue <int>
#define que_inc        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << '\n'
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << '\n'
#define print2(a)      forn(i,sz(a)){print(a[i]);}
#define yes            cout<<"YES\n" 
#define no             cout<<"NO\n"
#define start()        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); clock_t z = clock();
#define end1()          cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC); return 0;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int mod = 1e9+7;
const int N = 100005;



void solve() {
    cout<<"YES\n";
    no;
}

int32_t main(){
    start();
    int t = 1;
    cin >> t;
    while (t--) solve();
    end1();
}