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
   Tree* Minimum(Tree* tree)
   {
        if(tree->left != nullptr)
            return Minimum(tree->left);
        return tree;
        
   }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while(std::cin >> value)
        tree.push(value);

    tree.Minimum(&tree);

    system("pause");
    return 0;
}

/*Binary search tree is given. Return the pointer to the minimum element.

  Definition of a tree:

  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Implement function Minimum that returns pointer to the element with minimum value in the tree.

  TreeNode* Minimum(TreeNode *tree)*/