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
ll x,y;
ll a=0,b=0;
cin>>x>>y;
ll x1=0,y1=0;
string s;
cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='N'){
            y1++;
        }
        if(s[i]=='S'){
            y1--;
        }
        if(s[i]=='E'){
            x1++;
        }
        if(s[i]=='W'){
            x1--;
        }

        if(x1%x==0 && y1%y==0){
            py; return;
        }

    }

if(x1%x==0 && y1%y==0){
            py; return;
}
pn;


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