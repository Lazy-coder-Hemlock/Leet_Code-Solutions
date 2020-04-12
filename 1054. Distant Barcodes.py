from collections import Counter
class Solution:
    def rearrangeBarcodes(self, barcodes: List[int]) -> List[int]:
        index=0
        result=[0]*len(barcodes)
        for k,v in Counter(barcodes).most_common():
            for i in range(v):
                result[index]=k
                index+=2
                if index>=len(barcodes):
                    index=1
        return result
                
        
