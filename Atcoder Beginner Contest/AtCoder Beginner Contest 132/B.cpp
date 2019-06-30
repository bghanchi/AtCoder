#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mp make_pair
#define mt make_tuple
#define debug(c) cout<<c<<endl;
#define isro ios_base::sync_with_stdio(false);
#define find(v,x) find(all(v),x)!=v.end()

ll mod=1e9+7;

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int main(){
    isro;
    ll n;
    cin>>n;

    vi v(n);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    ll count=0;
    for(ll i=1;i<n-1;i++){

        if((v[i]>v[i-1] and v[i]<v[i+1]) or (v[i]>v[i+1] and v[i]<v[i-1])){
            count++;
        }
    }

    cout<<count<<endl;

}