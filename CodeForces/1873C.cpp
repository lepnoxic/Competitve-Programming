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
    char input;
    int total_sum = 0;
    int points;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> input;
            if (input == '.') continue;
            if (i < 2 || i > 9 || j < 2 || j > 9) total_sum += 1;
            else if (i < 3 || i > 8 || j < 3 || j > 8) total_sum += 2;
            else if (i < 4 || i > 7 || j < 4 || j > 7) total_sum += 3;
            else if (i < 5 || i > 6 || j < 5 || j > 6) total_sum += 4;
            else total_sum += 5;
        }
    }
    cout << total_sum << endl;
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