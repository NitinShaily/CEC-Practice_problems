#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(int k=0; k<n-i-1; k++)
            cout<<" ";
        for(j=0; j<=i; j++)
            cout<<"* ";
        cout<<"\n";
    }
    for(i=0; i<n-1; i++){
        for(int k=0; k<i+1; k++)
            cout<<" ";
        for(j=n-1; j>i; j--)
            cout<<"* ";
        cout<<"\n";
    }

    return 0;
}
/*
PS C:\Users\acer\CEC-Practice_problems\pattern> g++ q11.cpp
PS C:\Users\acer\CEC-Practice_problems\pattern> ./a.exe    
5
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/
