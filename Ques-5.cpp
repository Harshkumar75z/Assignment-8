// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;
    int m = n-1;
    int nsp=1;
    for(int i=1;i<=n;i++){
        cout<<i;
    }
    for(int j=n-1;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        // Stars 
        for(int j=1;j<=m-i+1;j++){
            cout<<j;
        }
        // Spaces 
        for(int l=1;l<=nsp;l++){
            cout<<" ";
        }
        nsp +=2;
        // Stars 
        for(int j=m-i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}