// Codeforces 282A

#include <iostream>
using namespace std;

int main() {
    int t, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string func;
        cin >> func;
        if (func == "++X" || func == "X++"){
            n++;
        } else if (func == "X--" || func == "--X") {
            n--;
        }
    }
    cout << n;
    return 0;
}
