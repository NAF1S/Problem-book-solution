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

int main(int argc, char const *argv[]){
    lightSpeed();
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int size = s.size();
        s+=s;
        int l = s.size();
        string s_new="Z";
        for(int i=0;i<(l-size);i++){
            string s1=s.substr(i,size);
            if(s_new>s1)s_new=s1;
        }
        cout<<s_new<<nl;
    }
}
