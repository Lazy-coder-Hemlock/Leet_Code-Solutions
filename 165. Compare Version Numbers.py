class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        first=[int(i) for i in version1.split('.')]
        second=[int(i) for i in version2.split('.')]
        if len(first)>len(second):
            value_zero=len(first)-len(second)
            second.extend([0]*value_zero)
        else:
            value_zero=len(second)-len(first)
            first.extend([0]*value_zero)
        for i in range(len(first)):
                if second[i]>first[i]:
                    return -1
                elif first[i]>second[i]:
                    return 1
                else:
                    if i==len(first)-1:
                        return 0
            
