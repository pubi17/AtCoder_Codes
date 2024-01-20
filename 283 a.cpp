#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fr(i,s,e) for(i=s;i<e;i++)
#define rf(i,s,e) for(i=s-1;i>=e;i--)
#define pb push_back
#define eb emblace_back
#define mp make_pair
typedef long long ll;

#define PI 3.141592653589793
#define MOD 1000000007

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    ll ln = s.size();
    ll stp = 0;
    for(ll i=ln-1; i>=0;){
        if((s[i]-'0')>0){ stp++; i--;}
        else if((s[i]-'0')==0 && (i-1>=0 && (s[i-1]-'0')>0)){stp++; i--;}
        else if((s[i]-'0')==0 && (i-1<0)) {stp++; i--;}
        else if((s[i]-'0')==0 && (i-1>=0 && (s[i-1]-'0')==0)){
                stp++; i-=2;
        }
    }

    cout << stp << endl;

    return 0;
}
