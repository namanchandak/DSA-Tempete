queue<>q;
q.push(root);

while(!q.empty())
{
    int size = q.size();
    while(size--)
    {
        int node = q.front();
        q.pop();
        if(node->left)
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
}
