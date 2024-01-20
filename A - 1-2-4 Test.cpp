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
    int t, a; cin >> t >> a;
    set<int>s;
    if(t==1||a==1) s.insert(1);
    if(t==2||a==2) s.insert(2);
    if(t==3||a==3) {s.insert(1); s.insert(2);}
    if(t==4||a==4) s.insert(4);
    if(t==5||a==5) {s.insert(4); s.insert(1);}
    if(t==6||a==6) {s.insert(4); s.insert(2);}
    int sum = 0;
    for(auto x:s) sum += x;
    cout << sum << endl;

    return 0;
}
