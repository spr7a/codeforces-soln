#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class K>
using ordered_set = tree<K, null_type, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
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
#define M 1000000007
ll power(ll a, ll b, ll mod) {
    if (b == 0)
        return 1;

    if (b % 2) {
        ll x = power(a, b / 2, mod);
        return (((x * x) % mod) * a) % mod;
    } else {
        ll x = power(a, b / 2, mod);
        return (x * x) % mod;
    }
}
    long long binaryExponentiation(long long base, long long exp, long long mod) {
    long long result = 1; 
    base = base % mod;   // Take base modulo mod
 
    while (exp > 0) {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        // Divide exp by 2 and square the base
        exp = exp / 2;
        base = (base * base) % mod;
    }
 
    return result;
}
//constraints?
void solve(){
ll n; cin>>n; 
char a,b; cin>>a>>b;
string s; cin>>s;
for(int i=0;i<n;i++){
    if(s[i]!=a){
        s[i]=b;
    }
}
ret(s);



}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
  // cin>>t;
    for(int i = 1; i<=t; i++){
   // cout<<"Case #"<<i<<": ";
        solve();}
  
    return 0;
}