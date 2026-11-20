class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int sum=0;
        double maxi=INT_MIN;

        while(j<n){
            sum=sum+nums[j];

            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                 double avg=(double)sum/k;
                maxi=max(avg,maxi);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};