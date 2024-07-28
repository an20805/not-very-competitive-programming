#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<ull> vull;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int g = __gcd(a,b);
    if(c%g==0)  cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin>>t;
    FOR(i,0,t){
        cout<<"Case "<<i+1<<": ";
        solve();
    } 
}