#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0) return false; // not prime 
        else true;
    }
}

bool isPrimeBtr(int n){ //sqtr(n) => n-1 =i*i

    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false; // not prime 36=2*18>2 divide 36
        else true;
    }
}
int main(){
    int a=2,b;
    cout<<"b :";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(isPrimeBtr(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}