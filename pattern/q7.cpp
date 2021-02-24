#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(int k=0; k<i; k++)
            cout<<" ";
        for(j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
/*
PS C:\Users\acer\CEC-Practice_problems\pattern> g++ q7.cpp
PS C:\Users\acer\CEC-Practice_problems\pattern> ./a.exe
5
*****
 ****
  ***
   **
    *

*/
