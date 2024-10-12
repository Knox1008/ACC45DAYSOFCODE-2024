class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int i=0,j=0;
        int sum=0;
        int minL=INT_MAX;

        while(j<n)
        {
            sum+=arr[j];
            while(sum>=target)
            {
                minL=min(minL,j-i+1);
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return minL==INT_MAX?0:minL;

    }
};