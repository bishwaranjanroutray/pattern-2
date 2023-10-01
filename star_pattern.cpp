// Print the following pattern
// Input : n = 5
// Output:
// *        *
//  *      *
//   *    *
//    *  *
//      *

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number of rows:";
    int n;
    cin>>n;
    int nsp1=0;
    int nsp2=(2*(n-1))-1;

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nsp1;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=nsp2;k++){
            cout<<" ";

        }
        cout<<"*";
        nsp1+=1;
        nsp2-=2;
        cout<<endl;
    }
    for(int j=1;j<=nsp1;j++){
            cout<<" ";
        }
        cout<<"*";
}