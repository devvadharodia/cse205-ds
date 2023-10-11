class Solution {
    public int majorityElement(int[] nums) {
        for(int i=0;i<nums.length;i++){
            for(int j=i;j<nums.length;j++){
                int temp = nums[i];
                if(nums[i]>nums[j]){
                    temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        return nums[nums.length/2];
    }
}