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
//constraints?
void solve(){
string s; cin>>s;

ll sum=0;
ll tw=0,thre=0;
for(auto c:s){
    if(c=='2'){
        tw++;
    }
    else if(c=='3'){
        thre++;
    }
    string ss="";
    ss+=c;
    int add=stoi(ss);
    //cout<<add<<endl;
    sum+=add;
}
if((sum%9)&1){
    pn;
    return;
}



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