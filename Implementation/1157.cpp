#include <bits/stdc++.h>
using namespace std;
int cnt[26], maxi;
string s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for(int i : s){
        if(s[i] >= 97){
            s[i] -= 32;
        }
        cout << s[0] << "\n";
        cnt[s[i] - 'A'] += 1;
    }
    maxi = 0;
    for(int i = 0; i < 26; i++){
        if(cnt[maxi] < cnt[i]){
            maxi = i;
        }
        else if(cnt[maxi] == cnt[i] && maxi != 0){
            cout << "?" << "\n";
            return 0;
        }
    }
    cout << cnt[maxi] << "\n";
    return 0;

}