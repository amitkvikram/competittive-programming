#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
#define ss second
#define ff first
#define pb push_back
#define pf push_front
#define rep(i, a, b) for(int i = a; i<b; i++)
#define all(v) v.begin(), v.end()

ll sum(vi v){ll init = 0; return accumulate(v.begin(), v.end(), init);}
ll sum(vii v, int check){
    ll init = 0;
    if(check == 1)
    return accumulate(v.begin(), v.end(), init, [](ll a, ii b){
        return a+b.ff;
    });
    else 
    return accumulate(v.begin(), v.end(), init, [](ll a, ii b){
        return a+b.ss;
    });
}
vi prsum(vi v){vi temp(v.size()); rep(i,0,v.size()){
    if(i>0) temp[i]=temp[i-1]+v[i];else temp[i] = v[i];}return temp;}

const ll mod = 1000000007;  

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class node{
    public:
    vector<int> adj;
    bool visited = false;
};

vi st(800000, 0);
vi v(200000, -1);


ll findMaxDivThree(int ind, string &s){
    
}

int main(){
    string s;
    cin >> s;
    cout << findMaxDivThree(0, s) << endl;
}