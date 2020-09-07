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
    bool isSame(Tree* tree1, Tree* tree2)
    {
        if (tree1 == nullptr && tree2 == nullptr)
            return true;
        if (tree1 == nullptr && tree2 != nullptr)
            return false;
        if (tree1 != nullptr && tree2 == nullptr)
            return false;
        if (tree1->val != tree2->val)
            return false;
        return isSame(tree1->left, tree2->left) &
            isSame(tree1->right, tree2->right);
    }
};

int main()
{
    Tree tree1(5);
    tree1.push(3);
    tree1.push(10);
    tree1.push(1);

    Tree tree2(5);
    tree2.push(3);
    tree2.push(10);
    tree2.push(2);

    std::cout << tree1.isSame(&tree1, &tree2);

    system("pause");
    return 0;
}
/*Given two binary trees, check if they are equal or not. 
  Two binary trees are considered equal if they are structurally identical and the nodes have the same value.

  Definition of a tree:

  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Implement function isSame that returns true if trees are equal and false otherwise.

  bool isSame(TreeNode *tree1, TreeNode *tree2)*/