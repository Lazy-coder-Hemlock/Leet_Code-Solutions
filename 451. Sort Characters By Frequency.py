class Solution:
    def frequencySort(self, s: str) -> str:
        l=collections.Counter(s).most_common(len(s))
        res=""
        for i in range(len(l)):
            key=collections.Counter(s).most_common(len(l))[i][0]
            value=collections.Counter(s).most_common(len(l))[i][1]
            r=key*value
            res+=r
        return res
