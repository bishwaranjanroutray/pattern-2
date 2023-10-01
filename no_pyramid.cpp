// Print the following pattern
// Input: n = 5
// Output:
//      1
//    1 2 3
//  1 2 3 4 5
// 1 2 3 4 5 6 7

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n;
    int nsp=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<k;
        }
        nsp-=1;
        cout<<endl;
    }

}