// link : https://leetcode.com/problems/binary-tree-level-order-traversal/


//pseudocode
 vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*>Q;
        Q.push(root);
        vector<vector<int>>ans;
        
        if(root==NULL)
        {
            return ans;
        }
        
        while(1)
        {
            int cnt = Q.size();
            if(cnt<=0)
            {
                break;
            }
            vector<int>v;
            while(cnt)
            {
                TreeNode *curr = Q.front();
                v.push_back(curr->val);
                Q.pop();
                if(curr->left)
                {
                    Q.push(curr->left);
                }
                if(curr->right)
                {
                    Q.push(curr->right);
                }
                cnt--;
                
            }
            ans.push_back(v);
        }
        return ans;
    }