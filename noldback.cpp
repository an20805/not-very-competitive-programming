#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

void solve(){
    int n, k;
    cin>>n>>k;
    //seive
    bool is_prime[1001];
    vector<int> prime;

    FOR(i,2,1001) is_prime[i] = true;

    for(int i=2; i<=1000; i++)
        if(is_prime[i]){
            prime.push_back(i);
            FORk(j,i*i,1001,i)
                is_prime[j]=false;
        }
    int sum=prime[0] + prime[1] + 1, count=0, i=0;
    while(sum<=n){
        if(is_prime[sum]){
            // cout<<sum<<' ';
            count++;
        }
        i++;
        sum = prime[i] + prime[i+1] + 1;
    }
    // cout<<count<<endl;
    if(count<k) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin>>t;
    FOR(i,0,t) solve();
}