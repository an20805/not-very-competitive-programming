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

int extd_gcd(int a, int b, int &x, int &y){
    if(b==0){
        x = 1;
        y = 0; //can be anything
        return a;
    }
    int x0, y0;
    int g = extd_gcd(b, a%b, x0, y0);
    x = y0;
    y = x0 - (a/b)*y0;
    return g;
}

void solve(int i){
    int a, b, c, g, x, y;
    cin>>a>>b>>c;

    if(a>b) g = extd_gcd(a, b, x, y);
    else g = extd_gcd(b, a, y, x);
    
    if (c%g==0) cout<<"Case "<<i+1<<": "<<"x = "<<x*(c/g)<<"\ty = "<<y*(c/g)<<endl;
    else cout<<"Case "<<i+1<<": "<<"No solution"<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin>>t;
    FOR(i,0,t){

        solve(i);
    } 
}