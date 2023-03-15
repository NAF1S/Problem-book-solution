#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int M = 1000000007;

int main(int argc, char const *argv[]){
	int n,x;
	queue<int>q;
	while(scanf("%d",&n),n){
		for(int i=1;i<=n;i++)
			q.push(i);
		cout<<"Discarded cards:";
		while(q.size()>1){
			cout<<q.front();
			q.pop();
			x=q.front();
			q.pop();
			if(!q.empty())
				cout<<",";
			q.push(x);
		}
		cout<<"\nRemaining card:"<<q.front();
		q.pop();
		cout<<nl;
	}
}
