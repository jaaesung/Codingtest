#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b){
    if(b == 1) return a % c;
    ll ret = go (a, b/2);
    ret = (ret * ret) % c;
    if(b%2)ret = (ret * a)%c; // 홀수 일땐 한번 더 곱한다.
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a, b) << "\n";
    return 0;
}