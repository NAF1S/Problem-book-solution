#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define first f
#define second s
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int M = 1000000007;
void solve(){
    ll ans=0;
    string s;cin>>s;//OOXXOXXOOO    
    int k=1;
    ll l = s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='O'){
            ans+=k;
            k++;
        }
        else{
            k=1;
        }
    }
    cout<<ans<<nl;
}
int main(int argc, char const *argv[]){
    lightSpeed();
    int t;cin>>t;
    while(t--){
        solve();
    }
}
