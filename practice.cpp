#include <iostream>
// #include <math.h>
using namespace std;



int peak(int arr[], int size) {

    int start = 0;
    int end = size - 1;

    while(start < end) {
        int mid = start + (end - start)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]){
            return mid;
        }

        else if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }

        else {
            end = mid;
        }
    }
}

int main()
{
    
    int arr[5] = {1,2,7,3,4};
    cout << peak(arr,5);
    return 0;
}


// #include<iostream>
// using namespace std;



// int peak(int arr[], int size) {

//     int start = 0;
//     int end = size - 1;

//     while(start < end) {
//         int mid = start + (end - start)/2;

//         if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]){
//             return arr[mid];
//         }

//         else if(arr[mid] < arr[mid - 1]){
//             end = mid - 1;
//         }

//         else {
//             start = mid;
//         }
//     }
// }


// int main() {

//     int arr[5] = {1,2,5,3,4};
//     cout << peak(arr,5);
// }