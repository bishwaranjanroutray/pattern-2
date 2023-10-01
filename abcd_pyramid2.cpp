// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D

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
        for(int k=i;k>=1;k--){
            cout<<char(k+64);
        }
        for(int l=2;l<=i;l++){
            cout<<char(l+64);
        }
        nsp-=1;
        cout<<endl;
    }

}