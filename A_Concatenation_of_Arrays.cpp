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

void sortPairsBySum(vector<pair<ll, ll>>& pairs) {
    sort(pairs.begin(), pairs.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b) {
          
            ll sum1 = a.first + a.second;
            ll sum2 = b.first + b.second;
            
            if (sum1 != sum2) {
                return sum1 < sum2;
            }
           
            if (a.first != b.first) {
                return a.first < b.first;
            }
         
            return a.second < b.second;
        });
}
void solve(){
ll n; cin>>n; 
vector<pair<ll,ll>> pairs;
while(n--){
    ll x,y;
    cin>>x>>y;
    pairs.emplace_back(x,y);
}
for(int i=0;i<n;i++){
    cout<<pairs[i].first<<" "<<pairs[i].second<<" ";
}
sortPairsBySum(pairs);




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