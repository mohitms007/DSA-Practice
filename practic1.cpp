#include<iostream>
#include<string>
using namespace std;




void stringcompresssion2(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {

        char ch = s[i];
        int count[26] = {0};
        int j = i;
        int index = 97;
        while (ch == s[j] && j < s.length())
        {
            index = s[j] - 'a';
            count[index]++;
            j++;
        }
        temp = temp + ch;
        cout << to_string(count[index])<<endl;
        temp.push_back(to_string(count[index]));
        count[index] = 0;
        i = j - 1;
    }
    cout << temp;
}


int main() {
    string s = "Mohit";

    stringcompresssion2(s);
}