class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        return [collections.Counter(nums).most_common(k)[i][0] for i in range(k)]
