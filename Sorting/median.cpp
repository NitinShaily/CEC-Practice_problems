#include<iostream>
#include<stdlib.h>
using namespace std;

int partition(int *arr, int l, int r){
   int rnd = rand()%(r-l+1)+l;
    swap(arr[rnd], arr[r]);

    int pivot = arr[r];
    int i=l-1, j=l;

    for(j=l; j<r; j++ ){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[r]);
    return i+1;
}

int findMedian(int *arr, int l, int r, int mid, int nonChangingN){
    if(l<r){
        int p = partition(arr, l, r);
        if(p==mid)
            return p;
        if(p>mid)        
            findMedian(arr, l, p-1, mid, nonChangingN);
        else
            findMedian(arr, p+1, r, mid, nonChangingN);
    }
}

int main(){
    int n;
    int nonChangingN;
    nonChangingN = n;
    cin>>n;
    int arr[n];
    
    int mid =  n/2;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int median = findMedian(arr, 0, n-1, mid, nonChangingN);

    if(n&1)                 //if n is odd
        cout<<"median: "<<arr[median];
    else
        printf("median: %.2f\n", (float)(arr[median]+arr[median-1])/2);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}