#include <iostream>

class Tree
{
private:
    int val;
    Tree* left;
    Tree* right;
public:
    Tree(int x):val(x), left(nullptr), right(nullptr){}
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
    void InOrder(Tree* tree)
    {
        if(tree->left != nullptr)
            InOrder(tree->left);
        printf("%d ", tree->val);
        if(tree->right != nullptr)
            InOrder(tree->right);
    }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while(std::cin >> value)
        tree.push(value);

    tree.InOrder(&tree);

    system("pause");
    return 0;
}

/*Implement an InOrder traversal of a tree. In this traversal left subtree is visited first, then root node, and finally right subtree.

  Definition of a tree:

  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Implement function InOrder that prints in one line the vertices of the tree in order of InOrder traversal. Separate the vertices with one space.

  void InOrder(TreeNode *tree)*/