#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(int k=0; k<n-i; k++)
            cout<<" ";
        for(j=1; j<=i+1; j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
/*
PS C:\Users\acer\Desktop\daa\CEC\Pattern> g++ .\q3.cpp
PS C:\Users\acer\Desktop\daa\CEC\Pattern> ./a.exe     
5
     1
    12
   123
  1234
 12345
 */