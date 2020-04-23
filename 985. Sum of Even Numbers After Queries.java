class Solution {
    public int[] sumEvenAfterQueries(int[] A, int[][] queries) {
     int []n=new int[A.length];
        int k=0;
        for(int []arr:queries){
            int sum=0;
         var index=arr[1];
         var value=arr[0];
         A[index]+=value;
         for(int i=0;i<A.length;i++){
             if((A[i]&1)==0)
                 sum+=A[i];
         }
            n[k]=sum;
            k++;
     }
        return n;
    }
}
