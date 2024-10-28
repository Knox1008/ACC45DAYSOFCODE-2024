#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int>ans(N);
        for (int i = 0; i < N; i++) {
            cin >> ans[i];
        }

        int count = 0;
        for (int i = 0; i < N; i++) {
            
            if ((ans[i] + K) % 7 == 0) {
                count++;
            }
        }

        cout << count << endl; 
    }

    return 0;
}


