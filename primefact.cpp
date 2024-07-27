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

const int n = 100000;
int spm[n+1]; //smallest prime factor

void solve(){
    FOR(i,0,n+1) spm[i]=i;

    for(int i=2; i*i<=n; i++){
        if(spm[i]==i)
            FORk(j,i*i,n+1,i)
                if(spm[j] == j)
                    spm[j] = i;
    }

    int cn, cf;
    // for(auto i: spm) cout<<spm[i]<<endl;
    FOR(i,2,n+1){
        cout<<i<<": ";
        cn = i;
        cf = 1;
        while(cn!=1){
            if(cf != spm[cn])
                cout<<spm[cn]<<" ";
            cf = spm[cn];
            cn = cn/cf;
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin>>t;
    FOR(i,0,t) solve();
}