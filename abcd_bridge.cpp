// Print the following pattern
// Input: n = 4
// Output:
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++) cout<<(char)(z+64);
    cout<<endl;
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=n-1;i++){
        int z=1;
        for(int i=1;i<=nst;i++){
        cout<<(char)(z+64);
        z++;
        }
        for(int i=1;i<=nsp;i++){
            cout<<" ";
            z++;
        }
        for(int i=1;i<=nst;i++){
            cout<<(char)(z+64);
            z+=1;
        }        
        nst-=1;
        nsp+=2;      
        cout<<endl;
    }
}