class Solution {
    public int missingNumber(int[] nums) {
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
        int i=nums[0];
        for(int j=0;j<nums.length;j++){
            if(i!=nums[j]){
                return i;
            }
            i++;
        }
        if(i == nums.length){
            return i;
        }
        return 0;
    }
}