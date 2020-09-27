#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;

    while(t--) {
        cin >> a >> b;
        int upper = ((a + b - 1) / b) * b;
        cout << upper - a << endl;
    }
    
    return 0;
}