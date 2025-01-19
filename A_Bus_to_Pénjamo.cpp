#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define double long double
#define zll uint64_t
#define all(x) x.begin(), x.end()
#define rall(x) (x).begin(),(x).end(),greater<int>()
#define vin(a) for(int i=0;i<(a).size();i++)cin>>a[i];
#define vout(a) for(int i=0;i<a.size();i++)cout<<a[i]<<' ';cout<<endl;
#define vl vector<ll> 
#define pb push_back
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define pa cout << ans << endl
#define endl '\n'
#define ret(msg) cout << msg << '\n'; return
#define  ff first
#define  ss second
#define mod 1000000007
 trailingZeroes(int n) {
        int ans = 0;
        for (int i = 5; n / i >= 1; i *= 5) {
            ans += n / i;
        }
        return ans;
}
void solve(){
ll k; cin>>k;
ll h=k;

        ll lo = 0, hi = 1e9+1;
        while (hi - lo > 1) {
            ll mid = (lo + hi) / 2;
            if (trailingZeroes(mid) < h) {
                lo = mid;
            } else {
                hi = mid;
            }
        }

        ll ans = lo;
        if (trailingZeroes(lo)== h)
            ans = lo;
    


pa;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
 //  cin>>t;
    for(int i = 1; i<=t; i++){
   // cout<<"Case #"<<i<<": ";
        solve();}
  
    return 0;
}