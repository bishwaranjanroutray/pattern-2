// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3  3 2 1
// 1 2      2 1
// 1          1

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++) cout<<i;
    cout<<endl;
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=n-1;i++){
        int z=1;
        for(int i=1;i<=nst;i++){
        cout<<z;
        z++;
        }
        for(int i=1;i<=nsp;i++){
            cout<<" ";
            
        }
        for(int i=1;i<=nst;i++){
            z-=1;
            cout<<z;
        }        
        nst-=1;
        nsp+=2;      
        cout<<endl;
    }
}