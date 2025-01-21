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
bool hasThreeEqual(int a, int b, int c, int d) {
    return (a == b && b == c) || 
           (a == b && b == d) || 
           (a == c && c == d) || 
           (b == c && c == d);
}
bool hasFourEqual(int a, int b, int c, int d) {
    return a == b && b == c && c == d;
}

void solve(){
ll n; cin>>n; 
vl a(n);
vin(a);
if(n==2){
    if(a[0]==a[1]){
        ret(1);
    }
    else{
        ret(0);
    }
}
ll ans=0;
ll i,j;
if(n&1){
    ll mid=(n)/2;
   //cout<<mid;
    if((a[mid-1]==a[mid]) && (a[mid+1]==a[mid])){
        ans+=2;
    }
    else if((a[mid-1]==a[mid]) || (a[mid+1]==a[mid])){
        ans++;
    }
    
    if(n==3){
       // pa;
       ret(ans);
    }
    i=mid-1;
    j=mid+1;
    while(i>0){
        ll new1=a[i-1];
        ll new2=a[j+1];
        if(hasFourEqual(new1,new2,a[i],a[j])){
            ans+=2;
        }
        else if(hasThreeEqual(new1,new2,a[i],a[j])){
            ans++;
        }
        i--;
        j++;

    }

}
else
{
    i=n/2 -1;
    j=n/2;
    if(a[i]==a[j]){
        ans++;
    }
    while(i>0){
        ll new1=a[i-1];
        ll new2=a[j+1];
        if(hasFourEqual(new1,new2,a[i],a[j])){
            ans+=2;
        }
        
        else if(hasThreeEqual(new1,new2,a[i],a[j])){
            ans++;
        }
        i--;
        j++;

    }

}

ret(ans);


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