class Solution {
    public void duplicateZeros(int[] arr) {
        int []dup=new int[arr.length];
        int i,j;
        i=j=0;
        while(i<arr.length && j<arr.length){
            if(arr[i]==0){
                dup[j]=0;
                if(j+1<arr.length){
                    dup[j+1]=0;
                    j++;
                }
            }
            else{
                dup[j]=arr[i];
            }
            i++;j++;
        }
        for(int k=0;k<dup.length;k++)arr[k]=dup[k];
        
    }
}
