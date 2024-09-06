class Solution {
  public:]
    long long maxSubarraySum(vector<int> &arr) {
        long long sum=0;
        long long r=INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            r=max(r,sum);
            if(sum<=0){
                sum=0;
            }
        }
        return r;
    }
};
