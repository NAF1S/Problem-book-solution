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
	int cnt[10];
    memset(cnt,0,sizeof(cnt));
    int n;cin>>n;
    for(int i=1;i<=n;i++){
    	int num = i;
    	while(num!=0){
    		cnt[num%10]++;
    		num/=10;
    	}
    }
    for(int i=0;i<=9;i++){
    	cout<<cnt[i]<<" ";
    }
    cout<<nl;
}
int main(int argc, char const *argv[]){
	lightSpeed();
    int t;cin>>t;
    while(t--)
    	solve();
}
