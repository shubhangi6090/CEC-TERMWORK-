#include <bits/stdc++.h>
using namespace std;
 
int factorial(int n)
{
    if (n == 1) {
        return 1 ;
    }
    return n*factorial(n-1);
    
}
 
// Driver code
int main()
{
    int N ;
    cout<<"Enter the value of n"<<endl;
    cin>>N;

    // A, B and C are names of rods
    cout<<"Factorial of a number is "<<factorial(N);
    return 0;
}
