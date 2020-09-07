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
    void PostOrder(Tree* tree)
    {
        if(tree->left != nullptr)
            PostOrder(tree->left);
        if(tree->right != nullptr)
            PostOrder(tree->right);
        printf("%d ", tree->val);
    }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while(std::cin >> value)
        tree.push(value);

    tree.PostOrder(&tree);

    system("pause");
    return 0;
}

/*Implement a PostOrder traversal of a tree. In this traversal the left subtree is visited first, then the the right subtree and finally the root node.

  Definition of a tree:

  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Implement function PostOrder that prints in one line the vertices of the tree in order of PostOrder traversal. Separate the vertices with one space.

  void Postrder(TreeNode *tree)*/