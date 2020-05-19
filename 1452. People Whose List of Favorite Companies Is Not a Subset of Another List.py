class Solution:
    def peopleIndexes(self, favoriteCompanies: List[List[str]]) -> List[int]:
        i=0
        res=[]
        while i<len(favoriteCompanies):
            start=favoriteCompanies[i]
            count=0
            for j in range(len(favoriteCompanies)):
                if favoriteCompanies[j]!=start:
                    if not set(start).issubset(set(favoriteCompanies[j])):
                        count+=1
            if count==len(favoriteCompanies)-1:
                res.append(i)
            i+=1
        return res
        
