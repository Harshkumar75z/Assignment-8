// Print the following pattern
// Output:
//   1
//  1 2 3
// 1 2 3 4 5
//1 2 3 4 5 6 7
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<j;
        }cout<<endl;
    }
}