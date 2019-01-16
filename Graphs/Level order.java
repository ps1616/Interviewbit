/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    
    vector<vector<int>> res;
    queue<TreeNode*> q;
    vector<int> temp;
    if(A==NULL)
    return res;
    
    temp.push_back(A->val);
    q.push(A);
    res.push_back(temp);
    while(1)
    {
        vector<int> temp;
        int size=q.size();
        if(size==0)
        break;
        while(size>0){
        
         TreeNode *t=q.front();
        q.pop();
        if(t->left)
        {
            q.push(t->left);
            temp.push_back(t->left->val);
        }
        if(t->right)
        {
            q.push(t->right);
            temp.push_back(t->right->val);
        }
        --size;
        }
        if(!temp.empty())
        res.push_back(temp);
    }
    return res;
}
