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
#define mod 1000000007
bool isCubeRoot(int number) {
    if (number < 0) {
        return false; // Negative numbers can't be cube roots in this context.
    }

    int root = std::round(std::sqrt(number)); // Calculate the cube root and round to nearest integer.
    return  root * root == number;      // Check if the cube of the root equals the original number.
}
double cubeRoot(double number) {
    return std::sqrt(number); // Calculates the cube root of the number
}
//constraints?
void solve(){
ll n; cin>>n; 
vl a(n);
ll cur=0;
ll ans=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    cur+=a[i];
   // cout<<cur<<endl;
    if(isCubeRoot(cur)){
        ll nim=cubeRoot(cur);
        if(nim&1)ans++;
    }
}
pa;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   cin>>t;
    for(int i = 1; i<=t; i++){
   // cout<<"Case #"<<i<<": ";
        solve();}
  
    return 0;
}