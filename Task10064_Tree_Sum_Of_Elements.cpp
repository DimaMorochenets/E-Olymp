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
   int Sum(Tree* tree)
   {
        if(tree == nullptr)
            return 0;
        return tree->val + Sum(tree->left) + Sum(tree->right);
   }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while(std::cin >> value)
        tree.push(value);

    std::cout << tree.Sum(&tree);

    system("pause");
    return 0;
}

/*Binary tree is given. Find the sum of values in all its nodes.

  Definition of a tree:

  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Implement function Sum that returns the sum of values of all nodes in the tree.

  int Sum(TreeNode *tree)*/