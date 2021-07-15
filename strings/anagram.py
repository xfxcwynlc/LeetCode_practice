class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        d = {}
        for e in s:
            if e not in d:
                d[e]=1
            else:
                d[e]+=1
                
        for e in t:
            if e in d:
                d[e]-=1
                if d[e]<0:
                    return False
            else:
                return False
        res = sum(d.values())
        if res>0:
            return False
        return True
                    
