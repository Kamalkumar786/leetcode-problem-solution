# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        q=[]
        d=0
        if root==None:
            return 0
        q.append((root,d))
        while(q!=[]):
            root,d=q.pop(0)
            if root.left!=None:
                q.append((root.left,d+1))
            if root.right!=None:
                q.append((root.right,d+1))
        return d+1
                