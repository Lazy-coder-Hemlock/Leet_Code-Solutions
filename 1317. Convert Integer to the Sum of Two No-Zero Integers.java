class Solution {
    public int[] getNoZeroIntegers(int n) {
        int []arr=new int[2];
        int val=0;
        for(int i=1;i<=n;i++){
            val=n-i;
            if(String.valueOf(i).contains("0"))
                ;
            else if(String.valueOf(val).contains("0"))
                ;
            else{
                arr[0]=i;
                arr[1]=n-i;
                break;
            }
        }
        return arr;
    }
}
