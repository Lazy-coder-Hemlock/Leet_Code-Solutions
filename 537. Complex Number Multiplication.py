class Solution:
    def complexNumberMultiply(self, a: str, b: str) -> str:
        a=a.replace('i','j')
        b=b.replace('i','j')
        a=a.replace("+-","-")
        b=b.replace("+-","-")
        res=complex(a)*complex(b)
        first=str(int(res.real))
        second=str(int(res.imag))
        return first+"+"+second+"i"
        
