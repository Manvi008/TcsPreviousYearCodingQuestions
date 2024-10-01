#include<bits/stdc++.h>
using namespace std ; 
string solve(string s , int n ){
    string ans ;
    for(int i = 0 ; i <s.size();i++){
      int ascii = int(s[i]);
      if((ascii>=65 && ascii<=90)||(ascii >= 97 && ascii <= 122)){
          ans.push_back(s[i]);
      }
    }
    return ans ;
}
 int main(){
     string str = "take12% *&u ^$#forward";
  int n = str.length();

  cout << "Resultant string:" << "\n";
  cout << solve(str, n) << "\n";
     return 0 ;
 }
