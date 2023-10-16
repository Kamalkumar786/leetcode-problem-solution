# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        l=[]
        k=-1
        if root==None:
            return l
        q=[]
        q.append((root,0))
        while(q!=[]):
            root,d=q.pop(0)
            if root.left!=None:
                q.append((root.left,d+1))
            if root.right!=None:
                q.append((root.right,d+1))
            if d==k:
                l[k].append(root.val)
            else:
                l.append([root.val])
                k=d
            print(l)
        return l[::-1]
        