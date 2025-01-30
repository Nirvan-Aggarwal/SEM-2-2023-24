#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() {
        root = NULL;
    }

    // Function to insert data into the binary tree
    void insert(int val) {
        root = insertRecursive(root, val);
    }

    // Recursive function to insert data into the binary tree
    TreeNode* insertRecursive(TreeNode* node, int val) {
        if (node == NULL) {
            node = new TreeNode(val);
        } else {
            if (val < node->data) {
                node->left = insertRecursive(node->left, val);
            } else {
                node->right = insertRecursive(node->right, val);
            }
        }
        return node;
    }

    // Function to display the binary tree (inorder traversal)
    void inorderTraversal(TreeNode* node) {
        if (node != NULL) {
            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

    void display() {
        cout << "Binary Tree (Inorder traversal): ";
        inorderTraversal(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;

    // Inserting elements into the binary tree
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    // Displaying the binary tree
    tree.display();

    return 0;
}

