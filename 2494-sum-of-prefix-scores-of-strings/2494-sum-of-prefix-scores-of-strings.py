class Solution:
    def sumPrefixScores(self, words: List[str]) -> List[int]:
        d={}
        for i in words:
            for j in range(1,len(i)+1):
                if i[:j] not in d:
                    d[i[:j]]=1
                else:
                    d[i[:j]]+=1
        l=[]
        for i in words:
            c=0
            for j in range(1,len(i)+1):
                if i[:j] in d:
                    c+=d[i[:j]]
            l.append(c)
        return l
                
        

        