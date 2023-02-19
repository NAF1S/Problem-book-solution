/*I use Bangla system to solve this problem,Do u know what is bangla system??
<:
*/

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
vector<int> factor(int n){
    vector<int> res;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                res.pb(i);
                n/=i;
            }
        }
    }
    if(n>1){
        res.pb(n);
    }
    
    return res;
}
int solve(int n){
    vector<int> f;
    set<int> res;
    for(int i=1;i<=n;i++){
        vector<int> r = factor(i);
        for(int x:r){
            f.pb(x);
            res.insert(x);
        }
    }
    map<int,int> result;
    for(int x:f){
        result[x]++;
    }
    int k=1;
    for(int x:res){
        if(k!=0){
            cout<<x<<" "<<"("<<result[x]<<")";
            k--;
        }else{
            cout<<" "<<"*"<<" ";
            cout<<x<<" "<<"("<<result[x]<<")";
        }
    }
    cout<<nl;
}
int main(int argc, char const *argv[])
{
    int t;cin>>t;
    int k=1;
    while(t--){
        int n;cin>>n;
        cout<<"Case"<<" "<<k<<":"<<" "<<n<<" "<<"="<<" ";
        k++;
        solve(n);
    }
    return 0;
}
