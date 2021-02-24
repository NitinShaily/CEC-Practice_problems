#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(int k=0; k<n-i-1; k++)
            cout<<" ";
        for(j=1; j<=i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
/*
PS C:\Users\acer\Desktop\daa\CEC\Pattern> g++ .\q3.cpp
PS C:\Users\acer\Desktop\daa\CEC\Pattern> ./a.exe     
5
    *
   **
  ***
 ****
*****

*/
