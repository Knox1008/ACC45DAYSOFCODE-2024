#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int x, y;
        cin >> x >> y;
        int months = y / x;
        if (months * x < y) {
            cout << months << endl;
        } else {
            cout << months - 1 << endl;
        }
    }
    return 0;
}
