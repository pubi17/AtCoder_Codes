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
    ll n; cin >> n;
    n--;
    if(n==0) {cout << 0 << endl; return 0;}
    string s = "";
    while(n){
        int r = n%5;
        s += ((r*2)+'0');
        n /= 5;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}

