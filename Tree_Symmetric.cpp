#include <iostream>

class Tree
{
public:
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
    bool isSymmetric(Tree* tree)
    {
        if(tree == nullptr)
            return true;

        Tree* temp1 = tree->left;
        Tree* temp2 = tree->right;
        while(temp1 != nullptr && temp2 != nullptr){
            if(temp1->val != temp2->val)
                return false;
            temp1 = temp1->left;
            temp2 = temp2->right;
        }
        if((temp1 != nullptr && temp2 == nullptr) || 
            (temp1 == nullptr && temp2 != nullptr))
            return false;
        //////
        temp1 = tree->left;
        temp2 = tree->right;
        while(temp1 != nullptr && temp2 != nullptr){
            if(temp1->val != temp2->val)
                return false;
            temp1 = temp1->right;
            temp2 = temp2->left;
        }
        if((temp1 != nullptr && temp2 == nullptr) || 
            (temp1 == nullptr && temp2 != nullptr))
            return false;
        //////
        temp1 = tree->left;
        temp2 = tree->right;
        while(temp1 != nullptr && temp2 != nullptr){
            if(temp1->val != temp2->val)
                return false;
            if(temp1->right != nullptr || temp2->left != nullptr){
                temp1 = temp1->right;
                temp2 = temp2->left;
            }
            else {
                temp1 = temp1->left;
                temp2 = temp2->right;
            }
        }
        if((temp1 != nullptr && temp2 == nullptr) || 
            (temp1 == nullptr && temp2 != nullptr))
            return false;
        //////
        temp1 = tree->left;
        temp2 = tree->right;
        while(temp1 != nullptr && temp2 != nullptr){
            if(temp1->val != temp2->val)
                return false;
            if(temp1->left != nullptr || temp2->right != nullptr){
                temp1 = temp1->left;
                temp2 = temp2->right;
            }
            else {
                temp1 = temp1->right;
                temp2 = temp2->left;
            }
        }
        if((temp1 != nullptr && temp2 == nullptr) || 
            (temp1 == nullptr && temp2 != nullptr))
            return false;

        return true;
    }
};

int main()
{
    Tree tree(1);
    tree.left = new Tree(2);
    tree.right = new Tree(2);
    tree.left->left = new Tree(3);
    tree.left->right = new Tree(4);
    tree.right->left = new Tree(4);
    tree.right->right = new Tree(3);

    std::cout << tree.isSymmetric(&tree);

    system("pause");
    return 0;
}

/*Given a binary tree. Check whether it is a mirror of itself (i.e. symmetric around its center).

Definition of a tree:

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

Implement function isSymmetric that returns true if tree is symmetric and false otherwise.

bool isSymmetric(TreeNode *tree)*/