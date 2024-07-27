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

const int n = 3000;
int spm[n+1];

void seive(){
    FOR(i,0,n+1) spm[i]=i;

    for(int i=2; i*i<=n;i++)
        if(spm[i]==i)
            FORk(j,i*i,n+1,i)
                if(spm[j]==j)
                    spm[j] = i;
}

bool check_almost_prime(int x){
    int c = 0; //count of distict prime divisors
    int f = spm[x];
    while(x!=1){
        if(f != spm[x/f])  //last prime factor is different from current prime factor
            c++;
        x/=f;
        f = spm[x];
    }
    if(c==2) return true;
    else return false;
}

void solve(){
    int N;
    cin>>N;
    seive();
    int count = 0;
    FOR(i,1,N+1)
        if(check_almost_prime(i))
            count++;

    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin>>t;
    FOR(i,0,t) solve();
}