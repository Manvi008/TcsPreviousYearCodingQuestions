#include<bits/stdc++.h>
using namespace std ;
int smallest(int arr[],int n){
    int min = arr[0];
    for(int i = 1 ; i < n ; i ++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min ;
}
int main(){
     int arr2[] =  {8,10,5,7,9};
    int n = 5;
   int  min = smallest(arr2, n);
    cout<< "The smallest element in the array is: " << min;
    return 0;
}
