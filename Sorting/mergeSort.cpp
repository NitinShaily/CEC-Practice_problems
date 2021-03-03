 #include<iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void merge(int *arr, int l, int m, int r){
    int nl=m-l+1;
    int nr=r-m;
    int i;
    int larr[nl], rarr[nr];
    for(i =0; i<nl;i++)
        larr[i]=arr[l+i];
    for(i =0; i<nr; i++)
        rarr[i]=arr[m+1+i];
    
    i=0;
    int j=0,k=l;
    while (i < nl && j < nr)
    {
        if (larr[i] <= rarr[j])
        {
            arr[k] = larr[i];
            i++;
        }
        else
        {
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }
    //cout<<"arr = "<<arr[0]<<"\n";
   while(i<nl) {       //extra element in left array
      arr[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      arr[k] = rarr[j];
      j++; k++;
   }

}
void mergeSort(int *arr, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      cout<<"m= "<<m<<endl;
      // Sort first and second arrs
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge(arr, l, m, r);
      
   }
}

int main(){

    int l=0,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    mergeSort(arr, 0, n-1);
    display(arr, n);
    return 0;

}