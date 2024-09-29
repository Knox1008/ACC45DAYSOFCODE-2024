#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int friends , sub_cost;
        cin >> friends >> sub_cost;
        int sub_needed = ceil(friends/ 6.0);
        int total = sub_needed * sub_cost;
        cout << total << endl;
    return 0;
}
