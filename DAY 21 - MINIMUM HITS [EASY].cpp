#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;
        int n = 1;
        while (H >= (n * X + Y)) {
            n++;
        }
        cout << n << endl;
    }
    return 0;
}
