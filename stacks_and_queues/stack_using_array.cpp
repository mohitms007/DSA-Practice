#include<iostream>
#include<vector>
using namespace std;


class Stack {
    public:
        int top = -1;
        vector<int> arr;

        void push(int val) {
            arr.push_back(val);
            top += 1;
        }

        void pop(int val) {
            arr.pop_back();
            top -= 1;
        }

        int getTop() {
            if(top > arr.size() - 1 || top < 0) {
                return -1;
            }
            return arr[top];
        }

        bool isEmpty() {
            if(arr.size() == 0) {
                return true;
            }
        }

};


int main() {
    Stack* init = new Stack();
    init->push(1);
    init->push(1);
    init->push(1);
    init->push(13);

    cout<< init->getTop();

}