#include<iostream>
using namespace std;
void itfib(int n){
    int f=0;
    int s=1;
    if(n==1){
        cout<<f;
    }
    else if(n==2){
        cout<<f<<" "s;
    }
    else{
        cout<<f<<" "<<s<<" ";
        int i=3;
        int nt=1;
        while(i<=n){
            cout<<nt<<" ";
            f=s;
            s=nt;
            nt=f+s;
            i++;
        }     
    }
}
int main(){
    int n;
    cout<<"Enter the number of values"<<endl;
    cin>>n;
    itfib(n);
    cout<<endl;
    return 0;
}
