from collections import Counter
class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        s=set()
        total=0
        for k,v in Counter(arr).most_common():
            s.add(k)
            total+=v
            if total>=len(arr)//2:
                break
        return len(s)
