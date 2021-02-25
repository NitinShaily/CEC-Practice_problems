#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(int k=0; k<n-i-1; k++)
            cout<<" ";
        for(j=1; j<=i+1; j++)
            cout<<"*";
        cout<<"\n";
    }
  
    return 0;
}
/*
PS C:\Users\acer\CEC-Practice_problems\pattern> g++ q12.cpp
PS C:\Users\acer\CEC-Practice_problems\pattern> ./a.exe    
5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1

*/
