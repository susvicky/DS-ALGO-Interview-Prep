//link : https://leetcode.com/problems/same-tree/


//pseudocode

 bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL)
        {
            return true;
        }
        if(p==NULL && q!=NULL || q==NULL && p!=NULL)
        {
            return false;
        }
        if(p->val!=q->val)
        {
            return false;
        }
        
        if(isSameTree(p->left,q->left)==false)
        {
            return false;
        }
        if(isSameTree(p->right,q->right)==false)
        {
            return false;
        }
        return true;
            
    }