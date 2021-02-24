#include<iostream>
using namespace std;

int main(){
    int i,j,n;

    cin>>n;

    for(i=0; i<n; i++){
        for(j=1; j<=i+1; j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
/*
5
1
12
123
1234
12345
*/