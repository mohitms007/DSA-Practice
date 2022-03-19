#include <iostream>
#include <stack>    
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



void preorder(Node* root) {
    
    if(root == NULL){
        return;
    }

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(Node* root) {
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}




void iterative_preorder(Node* root) {
    if(root == NULL) {
        return;
    }

    stack<Node*> pre;
    pre.push(root);

    while(!pre.empty()){
        Node* top_most = pre.top();
        pre.pop();
        cout << top_most->data << " ";
        if(top_most->right != NULL){
            pre.push(top_most->right);
        }
        if(top_most->left != NULL){
            pre.push(top_most->left);
        }
    }
}



void iterative_inorder(Node* root) {
    // L ROOT R

    if(root == NULL) {
        return;
    }
    Node* node = root;
    stack<Node*> ans;
    ans.push(node);
    while(true){
        if(node != NULL){
            ans.push(node);
            node = node->left;
        } else{
            if(ans.empty() == true) break;
            node = ans.top();
            ans.pop();
            cout << node->data<< " ";
            node = node -> right;
        }
    }

}

void iterative_postorder2(Node* root){
        if(root == NULL) return;
        stack<Node*> st1, st2; 
        st1.push(root); 
        while(!st1.empty()) {
            root = st1.top(); 
            st1.pop();
            st2.push(root); 
            if(root->left != NULL) {
                st1.push(root->left); 
            }
            if(root->right != NULL) {
                st1.push(root->right); 
            }
        }
        while(!st2.empty()) {
            // postorder.push_back(st2.top()->val);
            cout << st2.top()->data; 
            st2.pop(); 
        }
    
}


int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    // inorder(root);
    // cout<<endl;
    // preorder(root);

    
    
    cout<<endl;
    iterative_postorder2(root);
    // postorder(root);
     
}