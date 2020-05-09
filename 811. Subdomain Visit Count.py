class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        d=Counter()
        result=[]
        for domain in cpdomains:
            value,domain=domain.split(" ")
            further_domains=domain.split('.')
            for i in range(len(further_domains)):
                store='.'.join(further_domains[i:])
                d[store]+=int(value)
        for value,domain in d.items():
            result.append(str(domain)+" "+str(value))
        return result
        
