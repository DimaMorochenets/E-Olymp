#include <iostream>

class Tree
{
private:
    int val;
    Tree* left;
    Tree* right;
public:
    Tree(int x) :val(x), left(nullptr), right(nullptr) {}
    ~Tree() { delete left; delete right; }
    void push(int x)
    {
        if (x <= this->val) {
            if (this->left == nullptr)
                this->left = new Tree(x);
            else
                this->left->push(x);
        }
        else {
            if (this->right == nullptr)
                this->right = new Tree(x);
            else
                this->right->push(x);
        }
    }
    int SumLeaves(Tree* tree)
    {
        if (tree == nullptr)
            return 0;
        if(tree->left == nullptr && tree->right == nullptr)
            return tree->val;
        if (tree->left != nullptr && tree->left->left == nullptr && tree->left->right == nullptr)
            return tree->left->val + SumLeaves(tree->right);
        if (tree->right != nullptr && tree->right->left == nullptr && tree->right->right == nullptr)
            return tree->right->val + SumLeaves(tree->left);
        return SumLeaves(tree->left) + SumLeaves(tree->right);
    }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while (std::cin >> value)
        tree.push(value);

    std::cout << tree.SumLeaves(&tree);

    system("pause");
    return 0;
}

/*Given a binary tree. Find the sum of all leaves.

Definition of a tree:

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

Implement function SumLeaves that returns the sum of left leaves in a tree. If input tree haven't left leaves, return 0.

int SumLeaves(TreeNode *tree)*/