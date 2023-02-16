#User function Template for python3


class Solution:
    def firstElementKTime(self,  a, n, k):
        d={}
        for i in range(len(a)):
            if a[i] in d:
                d[a[i]]+=1
                    
            else:
                d[a[i]]=1
            
            if d[a[i]]>=k:
                return a[i]
        return -1
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, k = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.firstElementKTime(a, n, k))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends