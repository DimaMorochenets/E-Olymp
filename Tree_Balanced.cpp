#include <iostream>

class TreeNode
{
private:
    int val;
    TreeNode* left;
    TreeNode* right;
public:
    TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
    ~TreeNode() { delete left; delete right; }
    void push(int x)
    {
        if (x <= this->val) {
            if (this->left == nullptr)
                this->left = new TreeNode(x);
            else
                this->left->push(x);
        }
        else {
            if (this->right == nullptr)
                this->right = new TreeNode(x);
            else
                this->right->push(x);
        }
    }
    bool isBalanced(TreeNode* root)
    {
        if(root == nullptr)
            return true;
        if(root->left == nullptr && root->right == nullptr)
            return true;
        if(root->left == nullptr && root->right != nullptr){
            if(root->right->left == nullptr && root->right->right == nullptr)
                return true;
            if(root->right->left != nullptr || root->right->right != nullptr)
                return false;
        }
        if(root->left != nullptr && root->right == nullptr){
            if(root->left->left == nullptr && root->left->right == nullptr)
                return true;
            if(root->left->left != nullptr || root->left->right != nullptr)
                return false;
        }
        return isBalanced(root->left) & isBalanced(root->right);
    }
};

int main()
{
    int value;
    std::cin >> value;
    TreeNode tree(value);

    while (std::cin >> value)
        tree.push(value);

    std::cout << tree.isBalanced(&tree);

    system("pause");
    return 0;
}

/*Given a binary tree. Determine if it is height-balanced. 
A height-balanced binary tree is defined as a 
binary tree in which the depth of the two subtrees of every node never differ by more than 1.

Definition of a tree:

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
Implement function isBalanced that returns true if the tree is balanced and false otherwise.

bool isBalanced(TreeNode *tree)*/