#include <iostream>
#include <vector>
using namespace std;



int main()

{
   vector<int> ans = {1,3,2};
   vector<int> ans1 = {1,2,3,4};
   ans1 = ans;
   ans[0] = 33;
   for(int i=0;i<ans1.size();i++){
       cout<< ans1[i] << " ";
   }
    return 0;
}


