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
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;
    int m = n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<char(i+64);
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        // Stars 
        int a=1;
        for(int j=1;j<=m-i+1;j++){
            cout<<char(a+64);
            a++;
        }
        // Spaces 
        for(int l=1;l<=nsp;l++){
            cout<<" ";
            a++;
        }
        nsp +=2;
        // Stars 
        for(int j=1;j<=m-i+1;j++){
            cout<<char(a+64);
            a++;
        }
        cout<<endl;
    }
}
