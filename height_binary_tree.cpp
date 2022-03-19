#include <iostream>
#include<algorithm>
#include <queue>    
using namespace std;


class Node {
    
    public: 
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};



int findHeight(Node* root) {
        int depth = 0;
        
        if (root == NULL) return depth;
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            depth++;
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();
                if (temp -> left != NULL) q.push(temp -> left);
                if (temp -> right != NULL) q.push(temp -> right);
            }
        }
        
        return depth;
}

bool checkBalanceBT(Node* root) {
    if(root == NULL) {
        return true;
    }

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    if(abs(leftHeight - rightHeight) > 1) {
        return false;
    }

    int leftSide = checkBalanceBT(root->left);
    int rightSide = checkBalanceBT(root->right);

    if(!leftSide || !rightSide) {
        return false;
    }

    return true;


}


int main() {
    Node* t = new Node(1);

               // 1 
        // 2       // 3
    //4            //5    // 6
              
    

    t->left = new Node(2);
    t->left->left = new Node(4);
    t->right = new Node(3);
    t->right->left = new Node(5);
    t->right->right = new Node(7);
    t->right->right->right = new Node(7);
    t->right->right->left = new Node(7)
    t->right->right->right->right = new Node(7);
    t->right->right->right->right->right = new Node(7);
    // cout<< findHeight(t);
    cout<< checkBalanceBT(t);
}
