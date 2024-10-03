#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int B_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));
        
      
        int max_points = max(A_first,B_first);
        
        cout << max_points << endl;
    }
    return 0;
}
