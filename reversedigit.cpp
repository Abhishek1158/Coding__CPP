#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int reverse=0;

    while(a>0){
        int lastdigits=a%10;
        reverse=reverse*10+lastdigits;
        a=a/10;
    }
    cout<<reverse<<endl;
    return 0;
}