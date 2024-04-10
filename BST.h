//
// Created by nexus on 4/9/24.
//

#ifndef LAB6_BST_H
#define LAB6_BST_H

struct TreeNode{
    TreeNode * lChild;
    int data;
    TreeNode * rChild;

};

class BST {
    TreeNode * root;
public:
    BST();
    void insert(int data);
};
BST::BST() {
    root = nullptr;
}

void BST::insert(int data) {
    if (root == nullptr){
        root = new TreeNode{nullptr, data, nullptr};
        return ;
    }

}


#endif //LAB6_BST_H
