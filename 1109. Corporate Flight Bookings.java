class Solution {
    public int[] corpFlightBookings(int[][] bookings, int n) {
        int []arr=new int[n];
        for(int []book:bookings){
            var start=book[0];
            var end=book[1];
            for(int i=start-1;i<end;i++)arr[i]+=book[2];
        }
        return arr;
    }
}
