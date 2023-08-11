class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        for i in range(0,len(haystack)):
            for j in range(i,len(haystack)):
                print(haystack[i:j+1])
                if(haystack[i:j+1]==needle):
                    return(i)

        return -1
      
