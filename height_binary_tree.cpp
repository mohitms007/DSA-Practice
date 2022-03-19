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
    if (root == NULL) {
        return 0;
    }

    queue<Node*> ans;
    int height = 0;
    Node* start = root;
    ans.push(start);
    // ans.push(NULL);

    while(!ans.empty()){


        while(ans.size() > 0) {

            Node* front = ans.front();
            ans.pop();
            if(front->left){
                ans.push(front->left);
            }

            if(front->right) {
                ans.push(front->right);
            }
        }
        cout<<height;
        height ++;


       
    }

    return height;
}


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

    cout<< findHeight(t);
}
