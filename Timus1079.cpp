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
const int n = 1e5+1;
int ans[n];
void precompute(){
    int seq[n];
    seq[0]=0;
    seq[1]=1;
    for(int i=2;i<n;i++){
        if(i%2==0)seq[i]=seq[i/2];
        else seq[i]=seq[i/2]+seq[i/2+1];
    }
    int cnt=0;
    ans[0]=0;
    for(int i=1;i<n;i++){
        cnt=max(cnt,seq[i]);
        ans[i]=cnt;
    }
}
int main(int argc, char const *argv[]){
    lightSpeed();
    precompute();
    int a;cin>>a;
    cout<<ans[a];
    
}
