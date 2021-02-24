#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(int k=0; k<i; k++)
            cout<<" ";
        for(j=n-i; j>0; j--){
            cout<<j;
        }
        cout<<"\n";
    }
}
/*

PS C:\Users\acer\CEC-Practice_problems\pattern> g++ q8.cpp
PS C:\Users\acer\CEC-Practice_problems\pattern> ./a.exe   
5
54321
 4321
  321
   21
    1

*/
