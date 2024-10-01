#include<bits/stdc++.h>
using namespace std ;
string  removespaces(string s){
for(int i = 0 ; i < s.size(); i ++){
    if(s[i] ==' '){
        s = s.substr(0,i)+s.substr(i+1);
        i--;
    }
   
}
return s;
}
int main(){
    string str ="Take You Forwared";
    cout <<"String after removing the vowels \n" <<removespaces(str) << endl;
    return 0 ; 
}
