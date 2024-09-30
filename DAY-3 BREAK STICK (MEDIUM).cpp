/#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;
        if ((N % 2 == 0 || N % 2 == X % 2)&&X < N ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
