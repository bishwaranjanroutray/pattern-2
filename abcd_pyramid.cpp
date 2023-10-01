// Print the following pattern
// Input: n = 4
// Output:
//      A
//    A B C
//  A B C D E
// A B C D E F G

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
            cout<<char(k+64);
        }
        nsp-=1;
        cout<<endl;
    }

}