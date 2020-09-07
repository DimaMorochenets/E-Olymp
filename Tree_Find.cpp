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
   Tree* Find(Tree* tree, int element)
   {
        if(tree == nullptr) return nullptr;
        if(tree->val == element) return tree;
        if(tree->val > element)
            return Find(tree->left, element);
        return Find(tree->right, element);
   }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while(std::cin >> value)
        tree.push(value);

    std::cin >> value;
    tree.Find(&tree, value);

    system("pause");
    return 0;
}

/*Binary search tree is given. Find element in a tree.

  Definition of a tree:

  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Implement function Find that returns pointer to the element found. If element does not exist, return NULL.

  TreeNode* Find(TreeNode *tree, int element)*/