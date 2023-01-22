#include<iostream>
using namespace std;

int recfib(int n){
    if(n<=1){
        return n;
    }
    return recfib(n-1)+recfib(n-2);
}
int main(){
    int n;
    cout<<"Enter the number of values"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<recfib(i)<<" ";
    }
    return 0;
}
