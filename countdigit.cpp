// Code of counting digits in a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digits=0;  //610
    while(n>0){
        digits++;   //1  , 2 , 3
        n=n/10;     //61 , 6 , 0
    }
    cout<<digits<<endl;
    return 0;
}
