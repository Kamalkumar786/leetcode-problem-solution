# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCousins(self, root: Optional[TreeNode], x: int, y: int) -> bool:
        q=[]
        xp,yp,xd,yp=0,0,0,0
        p,d=0,0
        q.append((p,root,d))
        while(q!=[]):
            p,root,d=q.pop(0)
            if root.val==x:
                xp=p
                xd=d
            if root.val==y:
                yp=p
                yd=d
            if root.left!=None:
                q.append((root.val,root.left,d+1))
            if root.right!=None:
                q.append((root.val,root.right,d+1))
        if xp!=yp and xd==yd:
            return True
        return False
        