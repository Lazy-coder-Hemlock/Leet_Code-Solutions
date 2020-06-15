class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        count=Counter(arr)
        new_arr=sorted(arr,key=lambda x:(count[x],x))
        return len(set(new_arr[k:]))
