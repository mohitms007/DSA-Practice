#include<iostream>
#include<vector>
using namespace std;


void reverseAnArray(vector<int> arr, int start, int end) {
    if(start >= end) {
        return;
    }
    swap(arr[start], arr[end]);
    return reverseAnArray(arr, start + 1, end - 1);
}

void printArr(vector<int>arr) {

    for(int i=0;i<arr.size(); i++) {
        cout<< arr[i] << " ";
    }
}

bool checkIfPalindrome(string s) {
    if(s.length() <= 1) {
        return true;
    }

    checkIfPalindrome(s.substr(1, s.length() - 1));

    if(s[0] == s[s.length() - 1]){
        return true;    
    }

    return false;
}


int main() {
    vector<int> arr = {1,2,3,4};
    cout << checkIfPalindrome("redividr");
}