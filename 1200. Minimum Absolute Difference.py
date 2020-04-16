class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        d={}
        arr.sort()
        for i in range(1,len(arr)):
            d[i]=arr[i]-arr[i-1]
        m=min(i for i in d.values())
        res=[[arr[i-1],arr[i]] for i in d if d[i]==m]
        return res
