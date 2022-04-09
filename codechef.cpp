#include<iostream>
#include<vector>
#include <string>
using namespace std;




int main() {
   
   int t;
   cin >> t;
   while(t--) {
       int no_digits ;
       cin >> no_digits;
       string s ;
       cin >> s;
       
    //    string s = to_string(n);
       int flag = 0;
       for(int i=0;i<s.length();i++){
           if(s[i] == '0' || s[i] == '5'){
               flag = 1;
               cout << "Yes" << endl;
               break;
           }
       }
       
       if(flag == 0) {
           cout << "No" << endl;
       }
       
       
   }


}