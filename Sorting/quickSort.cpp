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
void quickSort(int *arr, int l, int r){
    if(l<r){
        int p = partition(arr, l, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}