

#include<bits/stdc++.h>
using namespace std ;
string  removeVowels(string s){
for(int i = 0 ; i < s.size(); i ++){
    if(s[i] =='a'||s[i]== 'e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        s = s.substr(0,i)+s.substr(i+1);
        i--;
    }
   
}
return s;
}
int main(){
    string str ="Take You Forwared";
    cout <<"String after removing the vowels \n" <<removeVowels(str) << endl;
    return 0 ; 
}
