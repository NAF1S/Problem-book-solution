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
    int n;cin>>n;
    int p=12;
    p-=n;
    int total = 5*60;
    total-=60;
    total/=45;
    if(total>=p){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
