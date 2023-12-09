void sol(TreeNode* root)
    {
        if(!root)
        return ;

        sol(root->left);
        ans.push_back(root->val);
        sol(root->right);

    }