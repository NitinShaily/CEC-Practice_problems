#include<iostream>
#include<algorithm>
using namespace std;

int findMajority(int *arr, int n){
    sort(arr, arr+n);
    int half = n/2;
    for(int i=0; i<half-1; i++){
        if(arr[i]==arr[i+half])
            return arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int maj = findMajority(arr, n);
    if(maj != -1)
        cout<<"majority element: "<<maj;
    else
        cout<<"Element don't exist";

    return 0;
}

//output:

