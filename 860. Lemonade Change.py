class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        res=[]
        for i in bills:
            if i==5:
                res.append(i)
            elif i==10:
                if 5 not in res:
                    return False
                else:
                    res.remove(5)
                    res.append(i)
            elif i==20:
                    if 10 in res:
                        res.remove(10)
                        if 5 not in res:
                            return False
                        else:
                            res.remove(5)
                    else:
                        if res.count(5)>=3:
                            res.remove(5)
                            res.remove(5)
                            res.remove(5)
                        else:
                            return False   
        return True
                
