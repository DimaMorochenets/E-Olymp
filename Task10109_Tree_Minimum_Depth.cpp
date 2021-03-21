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
    int minDepth(Tree* tree)
    {
        if(tree->left == nullptr && tree->right == nullptr)
            return 1;
        if(tree->left != nullptr && tree->right != nullptr)    
            return 1 + (minDepth(tree->left) > minDepth(tree->right)?
                minDepth(tree->left):minDepth(tree->right));
        if(tree->left != nullptr && tree->right == nullptr)
            return 1 + minDepth(tree->left);
        return 1 + minDepth(tree->right);
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

/*Given a binary tree, find its minimum depth. The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

  Definition of a tree:

  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Implement function minDepth that returns the minimum depth of the tree.

  int minDepth(TreeNode *tree)*/