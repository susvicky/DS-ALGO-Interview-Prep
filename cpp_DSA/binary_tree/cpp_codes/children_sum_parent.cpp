// link : https://www.geeksforgeeks.org/check-for-children-sum-property-in-a-binary-tree/

//pseudocode

int isSumProperty(Node *root)
{
 // Add your code here
 
    if(root==NULL)
    {
        return 1;
    }
    
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    
    int sum = 0;
    if(root->left)
    {
        sum+=root->left->data;
    }
    if(root->right)
    {
        sum+=root->right->data;
    }
    
    if(root->data==sum && isSumProperty(root->left) && isSumProperty(root->right))
    {
        return true;
    }
 
    return false;
 
}