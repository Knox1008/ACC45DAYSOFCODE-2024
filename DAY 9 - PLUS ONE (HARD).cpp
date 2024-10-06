class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] < 9) {
                arr[i]++;
                return arr;
            }
            arr[i] = 0;
        }
        vector<int> new_array(n + 1, 0);
        new_array[0] = 1;
        return new_array;
    }
};
