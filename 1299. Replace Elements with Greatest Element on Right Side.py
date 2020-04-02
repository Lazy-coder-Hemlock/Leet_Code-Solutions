class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        k=[max(arr[i+1:]) for i in range(len(arr)-1)]
        k.append(-1)
        return k
