class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d={}
        l=[]
        for i in strs:
            s_word=''.join(sorted(i)) 
            if s_word not in d:
                d[s_word]=[i]
            else:
                d[s_word].append(i)
        for i in d:
            l.append(d[i])
        return l
            
