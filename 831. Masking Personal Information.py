class Solution:
    def maskPII(self, S: str) -> str:
        if(S.find('@'))>0:
            res=S.lower()
            five='*'*5
            a=res.find('@')
            res=res[0]+five+res[a-1:]
        else:
            res=S.replace('(','')
            res=res.replace(')','')
            res=res.replace('-','')
            res=res.replace('+','')
            res=res.replace(' ','')
            if(len(res)<=10):
                res='***-'*2+res[-4:]
            else:
                code=len(res)-10
                res='+'+'*'*code+'-'+'***-'*2+res[-4:]
        return res
                
