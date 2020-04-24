class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        result=set()
        for e in emails:
            name,last=e.split('@')
            if '+' in name:
                name=name[:name.index('+')]
            name=name.replace('.','')
            name=name+'@'+last
            result.add(name)
        return len(result)
                
        
