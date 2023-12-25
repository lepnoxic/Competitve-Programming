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
    int n, k, operations = 0;
    string strip;
    cin >> n >> k;
    cin >> strip;
    for (int i = 0; i < n; i++) {
        if (strip[i] == 'B') {
            i += k - 1;
            operations++;
        }
    }
    cout << operations << endl;
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