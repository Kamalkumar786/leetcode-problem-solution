class Solution:
    def maxInstance(self, s : str) -> int:
        d={}
        for i in range(len(s)):
            if s[i] in d:
                d[s[i]]+=1
            else:
                d[s[i]]=1
        b=d['b']
        a=d['a']
        l=d['l']//2
        o=d['o']//2
        n=d['n']
        return min(b,a,l,o,n)

#{ 
 # Driver Code Starts
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        s = (input())
        
        obj = Solution()
        res = obj.maxInstance(s)
        
        print(res)

# } Driver Code Ends