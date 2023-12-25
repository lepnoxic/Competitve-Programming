#include <bits/stdc++.h>  
#include <iostream>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr, arr + n)
#define sortav sort(v.begin(), v.end())
#define MOD 1000000007
using namespace std;
    
void solve() {
    string s;
    cin >> s;
    if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}