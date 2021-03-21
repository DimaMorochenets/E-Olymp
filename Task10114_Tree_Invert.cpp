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
    void Tree_out(Tree* tree)
    {
        if(tree == nullptr)
            return;
        std::cout << tree->val << " ";
        Tree_out(tree->left);
        Tree_out(tree->right);
    }
    Tree* Invert(Tree* tree)
    {
        if(tree == nullptr)
            return nullptr;
        if(tree->left == nullptr){
            Tree* temp = Invert(tree->right);
            tree->right = nullptr;
            tree->left = temp;
        }
        else if(tree->right == nullptr){
            Tree* temp = Invert(tree->left);
            tree->left = nullptr;
            tree->right = temp;
        }
        else{
            Tree* temp = Invert(tree->left);
            tree->left = Invert(tree->right);
            tree->right = temp;
        }
        return tree;
    }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while (std::cin >> value)
        tree.push(value);

    tree.Invert(&tree);

    tree.Tree_out(&tree);
    std::cout << "\n";
    tree.Tree_out(&tree);

    system("pause");
    return 0;
}

/*Given a binary tree. Invert it. For each node:

left child must become right child;
right child must become left child;
Definition of a tree:

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

Implement function Invert that returns the pointer to the inverted tree.

TreeNode* Invert(TreeNode *tree)*/