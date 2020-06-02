class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        l=list(set(list1).intersection(set(list2)))
        d={}
        for i in l:
            d[i]=list1.index(i)+list2.index(i)
        res=[]
        for k,v in d.items():
            if v==min(d.values()):
                res.append(k)
        return res
