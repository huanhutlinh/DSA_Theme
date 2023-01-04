// [C] - Binary Tree Search

/*
Binary tree search:
This algorithm searches for a given element in a binary search tree by
comparing the element to the root node
and recursively searching the left
or right subtree depending on the comparison.
If the element is found, the algorithm returns a pointer to the node;
if the element is not found, the algorithm returns NULL.
*/

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *binary_tree_search(struct node *root, int target)
{
    if (root == NULL || root->data == target)
        return root;
    if (target < root->data)
        return binary_tree_search(root->left, target);
    else
        return binary_tree_search(root->right, target);
}
