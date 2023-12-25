#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr, arr + n)
#define sortav sort(v.begin(), v.end())
#define MOD 1000000007
using namespace std;

void solve() {
    int n, x, operations = 0;
    cin >> n >> x;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll low = 0, high = 2'000'000'007;
    ll h;
    ll w;
    while (low < high) {
        w = 0;
        h = low + (high - low + 1) / 2;
        for (int i = 0; i < n; i++)
            if (h - arr[i] > 0) 
                w += h - arr[i];
        if (w <= x) low = h;
        else high = h - 1;
    }
    cout << low << endl;
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