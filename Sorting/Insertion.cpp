#include<iostream>
using namespace std;
void insertionSort(int *arr, int n){
    int j,temp;
    for(int i=1; i<n; i++){
        j=i-1;
        temp = arr[i];

        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    insertionSort(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}

//output: 

// PS C:\Users\acer\CEC-Practice_problems\Sorting> g++ .\Insertion.cpp
// PS C:\Users\acer\CEC-Practice_problems\Sorting> .\a.exe
// 5
// 5 4 3 2 1
// 1 2 3 4 5
// PS C:\Users\acer\CEC-Practice_problems\Sorting> .\a.exe
// 10
// 10 9 8 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7 8 9 10