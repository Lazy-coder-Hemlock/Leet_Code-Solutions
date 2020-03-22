class Solution {
    public int[] productExceptSelf(int[] nums) {
    int []left=new int[nums.length];
        int []right=new int[nums.length];
        Arrays.fill(left,1);
        Arrays.fill(right,1);
        for(int i=1;i<nums.length;i++)left[i]=left[i-1]*nums[i-1];
        for(int i=nums.length-2;i>=0;i--)right[i]=right[i+1]*nums[i+1];
        int []result=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            result[i]=left[i]*right[i];
        }
        return result;
        
    }
}
