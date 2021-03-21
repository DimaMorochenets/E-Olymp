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
    void PreOrder(Tree* tree)
    {
        printf("%d ", tree->val);
        if(tree->left != nullptr) PreOrder(tree->left);
        if(tree->right != nullptr) PreOrder(tree->right);
    }
};

int main()
{
    int value;
    std::cin >> value;
    Tree tree(value);

    while(std::cin >> value)
        tree.push(value);

    tree.PreOrder(&tree);

    system("pause");
    return 0;
}

/*Реализуйте прямой обход дерева. При прямом обходе сначала посещается корень, 
  потом левое поддерево, потом правое поддерево.

  Определение дерева:

  C++
  class TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  Реализуйте функцию PreOrder которая выводит в одной строке вершины дерева в порядке прямого обхода. 
  При выводе вершины следует разделять одним пробелом.

  void PreOrder(TreeNode *tree)*/