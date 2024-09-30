#include <iostream>
using namespace std;
bool isPalidrome(string s ){
    int left = 0 ; 
    int right = s.length()-1;
    if(s[left] == s[right] ){
        left ++;
        right --;
        return true ;
    }
    return false;
}
int main()
{
    string str = "abcd";
    bool ans =isPalidrome(str);
    if(ans==true){
        cout<<"Palindrome";
    }
    else {
        cout<<"Not Palindrome";
    }
    return 0;
}
