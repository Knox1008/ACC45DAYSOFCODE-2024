#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        int c_people = X;
        int m_people = X;
        
        for (int i = 0; i < N; ++i) {
            c_people += A[i];
            m_people = max(m_people, c_people);
        }
        
        cout << m_people << endl;
    }
    
    return 0;
}
