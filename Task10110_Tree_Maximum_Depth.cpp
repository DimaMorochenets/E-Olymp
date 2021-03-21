#include <iostream>

class Tree
{
private:
    int val;
    Tree* left;
    Tree* right;
public:
    Tree(int x = 0):val(x), left(nullptr), right(nullptr){}
    ~Tree(){delete left; delete right;}
    void push(int x)
    {
        if(x <= this->val){
            if(this->left == nullptr)
                this->left = new Tree(x);
            else
                this->left->push(x);
        }
        else{
            if(this->right == nullptr)
                this->right = new Tree(x);
            else
                this->right->push(x);
        }
    }
    int maxDepth(Tree* tree)
    {
        if(tree->left == nullptr && tree->right == nullptr)
            return 1;
        if(tree->left != nullptr && tree->right != nullptr)    
            return 1 + (maxDepth(tree->left) > maxDepth(tree->right)?
                maxDepth(tree->left):maxDepth(tree->right));
        if(tree->left != nullptr && tree->right == nullptr)
            return 1 + maxDepth(tree->left);
        return 1 + maxDepth(tree->right);
    }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while(std::cin >> value)
        tree.push(value);

    system("pause");
    return 0;
}

/*Given a binary tree, find its maximum depth. The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Definition of a tree:

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
Implement function maxDepth that returns the maximum depth of the tree.

int maxDepth(TreeNode *tree)*/