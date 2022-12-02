#User function template for Python

class Solution:	
	def binarysearch(self, arr, n, k):
	    l=0
	    h=n-1
	    while(l<=h):
	        
    	    mid=(l+h)//2
    	    if (arr[mid]==k):
    	        return mid
    	    elif (k<arr[mid]):
    	       h=mid-1
    	    else:
    	       l=mid+1
        return -1
    	  
		# code here


#{ 
 # Driver Code Starts
#Initial template for Python

if __name__ == '__main__':
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int, input().strip().split(' ')))
        k=int(input())
        ob = Solution()
        print (ob.binarysearch(arr, n, k))


# } Driver Code Ends