#include<iostream>
using namespace std;
int factorial(int n){

    // base case -> Rukna kaha h
    // no base case -> Segmentation fault jb (fn call stack)memory sari bhr jayegi
    if(n==0) return 1;
    // int small=factorial(n-1);
    // int bigger=n*small;
    
    return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter a: "<<endl;
    cin>>a;
    int ans=factorial(a);
    cout<<ans<<endl;
    return 0;
}