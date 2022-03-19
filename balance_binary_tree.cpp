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


int main() {
  Node* t = new Node(1);

               // 1 
        // 2       // 3
                //4   // 6
              //5
    

    t->left = new Node(2);
    t->left->left = new Node(4);
    t->right = new Node(3);
    t->right->left = new Node(5);
    t->right->right = new Node(6);
    t->right->left->left = new Node(7);
    t->right->right->right = new Node(8);
    t->right->right->right->right = new Node(9);
    t->right->right->right->right->left = new Node(10);

}