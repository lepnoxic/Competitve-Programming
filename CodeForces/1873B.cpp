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
    ll digits;
    cin >> digits;
    int arr[digits];
    for (int i = 0; i < digits; i++)
        cin >> arr[i];
    sort(arr, arr+digits);
    arr[0]++;
    int product = 1;
    for (int i = 0; i < digits; i++) 
        product *= arr[i];
    cout << product << endl;
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