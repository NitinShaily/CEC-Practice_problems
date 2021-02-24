#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(j=n; j>i; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
/*

PS C:\Users\acer\Desktop\daa\CEC\Pattern> g++ .\q5.cpp
PS C:\Users\acer\Desktop\daa\CEC\Pattern> ./a.exe     
5
*****
****
***
**
*

*/
