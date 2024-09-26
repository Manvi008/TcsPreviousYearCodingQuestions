/*Finding smallest of an Array using Vector*/
#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main(){
    vector<int>arr1 = {1,2,3,4,0};
    cout<<"The smallest array of the vector is"<<sortArr(arr1);
    return 0 ;
}
