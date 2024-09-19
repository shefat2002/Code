#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll                  long long
#define ld                  long double
#define ull                 unsigned long long
#define nl                  cout << "\n";
#define case                cout << "Case " << case_number << ": "; case_number++;
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI                  (acos(-1))

#define arr(a,n)            for(ll i =0; i < n; i++) cin >> a[i];
#define arrab(arr,a,b)      for(ll i =a; i <= b ;i++) cin >> arr[i];
#define vec(v)              for(auto &i:v) cin >> i;
#define tot(a)              a.begin(),a.end()
#define srt(a)              sort(a.begin(), a.end());
#define dsrt(a)             sort(a.rbegin(), a.rend());

template<class T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


ll gcd(ll a, ll b){ return (__gcd(a,b));}
ll lcm(ll a, ll b){ return (abs(a*b)/gcd(a,b));}

int case_number = 1;
void file()
{
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}


void solve()
{
    
}


int main()
{   
    file();
    fast;
    int n; 
    solve();
    // cin >> n; while(n--){solve();}
    // cin >> n; while(n--){case;solve();} // Case 
}