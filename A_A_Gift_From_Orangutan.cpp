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


void solve(){
ll n; cin>>n; 
vl a(n);
vin(a);
ll opr; cin>>opr;
vl b(opr);
vin(b);
sort(all(b)); reverse(all(b));
for(int i=0;i<opr;i++){
    for(int j=0;j<n;j++){
        a[j]-=b[i];
        a[j]=abs(a[j]);
    }
    vout(a);
    cout<<endl;
}
//9 19 29 69 59 39 4 4 5


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