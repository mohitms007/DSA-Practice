#include<iostream>
#include<set>
#include<vector>


using namespace std;

void printArray(vector<int> ds) {
    for(int i: ds) {
        cout << i << " ";
    }
}

void findAllSubsequences(vector<int> &ds, int arr[], int n, int index, int sum, int target) {
    if(index == n) {
        int getSum = 0;
        if(sum == target) {
            printArray(ds);
        }
        cout << endl;
        return;
    }


    //  take the element
    ds.push_back(arr[index]);
    findAllSubsequences(ds,arr,n,index + 1, sum + arr[index], target);
    ds.pop_back();


    // not take the element
    findAllSubsequences(ds,arr,n,index + 1, sum, target);
    
}


int main() {

    int arr[] = {3,1,2};
    int n = 3;

    vector<int> ds;

    findAllSubsequences(ds, arr, n, 0, 0, 3);

}