#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(j=n-i; j>0; j--){
            cout<<j;
        }
        cout<<"\n";
    }
}
/*

PS C:\Users\acer\Desktop\daa\CEC\Pattern> g++ .\q6.cpp
PS C:\Users\acer\Desktop\daa\CEC\Pattern> ./a.exe     
5
54321
4321
321
21
1

*/
