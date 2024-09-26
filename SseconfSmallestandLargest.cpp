int SecondLargest(vector<int>&a , int n){
    int largest = a[0];
    int sLargest = -1;
    for(int i = 1 ; i< n ; i++){
        if(a[i]>largest){
            sLargest = largest ;
            largest =a[i];
        }
        else if(a[i] > sLargest && a[i] != largest) {
            sLargest = a[i];
        }
    }
    return sLargest;
}
int SecondSmallest(vector<int>&a , int n){
    int smallest = a[0];
    int sSmallest = INT_MAX;
    for(int i = 1 ; i< n ; i++){
        if(a[i]<smallest ){
            sSmallest = smallest ;
            smallest =a[i];
        }
        else if(a[i] < sSmallest && a[i] != smallest) {
            sSmallest = a[i];
        }
    }
    return sSmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int sLargest = SecondLargest(a,n);
   int sSmallest = SecondSmallest(a,n);
return { sLargest, sSmallest};
}
